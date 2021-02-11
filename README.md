# One-Time Pad
Este programa explora a falha de se repetir a chave de criptografia no algoritmo one-time pad.

# Compilação

## Linux e MacOS

### llvm
```bash
clang++ -o main main.cpp converter.cpp loader.cpp
```
### gcc
```bash
g++ -o main main.cpp converter.cpp loader.cpp
```
## Windows
Não testei no windows, por isso não recomendo que se use esse SO para tal.

# Uso
Abra o emulador de terminal de vossa preferência.

```bash
cd /pasta/do/projeto

./main
```
digite um palpite ele será testado em varias posições da _string_ e se for um bom palpite uma das saidas do programa fará sentido e com isso pode-se melhorar o palpite para a próxima rodada.