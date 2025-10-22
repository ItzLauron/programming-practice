#!/bin/bash
set -e

GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'

echo -e "${YELLOW}Проверяю обновления...${NC}"
git pull --rebase --autostash

echo -e "${GREEN}Поиск и компиляция .c файлов, содержащих main()...${NC}"

find . -type f -name "*.c" | while read -r file; do
    if grep -q "main\s*(" "$file"; then
        dir=$(dirname "$file")
        base=$(basename "$file" .c)
        out="$dir/$base"
        echo -e "${GREEN}→ Компиляция: ${NC}$file → $out"
        gcc "$file" -o "$out" -std=c11 -Wall -Wextra
    fi
done

echo -e "${GREEN}✅ Сборка завершена.${NC}"
