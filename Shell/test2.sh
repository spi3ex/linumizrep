find . -exec file {} \; | grep -i elf \; | xargs -0 ls -laS
