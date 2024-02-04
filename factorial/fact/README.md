# Evaluación 1

Se realizó un código que evalua un parámetro, en este caso un número, y nos dice el equivalente factorial y si susodicho número es primo.

![image](https://github.com/hacUPB/sc-control-version-alizeewashere/assets/110273859/695aab42-991c-4f0c-8f9c-0c6ca007354e)

[Ver código en Git Hub](https://github.com/hacUPB/sc-control-version-alizeewashere/blob/main/factorial/fact/fact.c)

Los código principales usados en Git Bash fueron:

`git commit -m "texto descriptivo"`: envia el commit o cambios al repositorio

`git push`: envia el todos los cambios al repositorio online

`git add .`: añade a la lista de cambios los archivos que uno elija

`git pull`: para descargar un repositorio online al pc

`git status`: ver el estado del repositorio

`git log --oneline`: ver todos los commits hechos

`git checkout`: cambiar de versión o commit


# Texto previo.

In this directory, you should write the program `fact.c` and compile it into
the binary `fact` (e.g., `gcc -o fact fact.c -Wall -Werror`).

After doing so, you can run the tests from this directory by running the
`test-fact.sh` script. If all goes well, you will see:

```sh
prompt> ./test-fact.sh
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
test 7: passed
prompt>
```

The `test-fact.sh` script is just a wrapper for the `run-tests.sh` script in
the `tester` directory of this repository. This program has a few options; see
the relevant
[README](https://github.com/remzi-arpacidusseau/ostep-projects/blob/master/tester/README.md)
for details.
