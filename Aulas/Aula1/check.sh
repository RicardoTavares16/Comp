# Lex

flex calc.l

if [ -f "lex.yy.c" ]
then
  echo "Lex is installed."
else
  echo "Lex is not installed!"
fi

# Yacc
bison -y -d calc.y

if [ -f "y.tab.h" ]
then
  echo "Yacc/Bison is installed."
else
  echo "Yacc/Bison is not installed!"
fi


if [[ "$OSTYPE" == "linux-gnu" ]]; then
        # LLVM
      llc-3.9 -o=middle.s helloworld.ll

      if [ -f "middle.s" ]
      then
        echo "LLVM is installed."
      else
        echo "LLVM is not installed!"
      fi

      clang-3.9 -o helloworld middle.s

      if [ -f "helloworld" ]
      then
        echo "Clang is installed."
      else
        echo "Clang is not installed!"
      fi
elif [[ "$OSTYPE" == "darwin"* ]]; then
        # LLVM

          llc -o=middle.s helloworld.ll

          if [ -f "middle.s" ]
          then
            echo "LLVM is installed."
          else
            echo "LLVM is not installed!"
          fi

          clang -o helloworld middle.s

          if [ -f "helloworld" ]
          then
            echo "Clang is installed."
          else
            echo "Clang is not installed!"
          fi
fi

./helloworld

if [ $? -ne 0 ]
then
    echo "The LLVM Hello World example did not execute successfully."
fi

