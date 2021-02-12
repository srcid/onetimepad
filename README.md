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

Um bom palpite inicial é testar conectivos como: a,de,em,para,com,por,das,dos. Peguemos então "das", como geralmente "das" está no meio da frase usaremos então " das ".

![saída](https://drive.google.com/uc?export=view&id=1t_3NUI8GV9vKtQoclD9XwREbAmPIG4ru)

vemos que a partir da linha 14 obtivemos "fluen", que parece muito influencia, e assim seguimos até encontrar as frases completamente.

> o entendimento das metas propostas maximizam a possibilidade do conhecimento

> a crescente influencia da midia garante a contribuicao de grupos importantes.