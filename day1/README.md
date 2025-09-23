FAQ sur GCC, GNU, et le langage C
Q01 : Que signifie GCC ?

GCC signifie GNU Compiler Collection. C’est un ensemble de compilateurs pour différents langages (C, C++, Fortran, etc.), développé dans le projet GNU.

Q02 : Que signifie GNU ?

GNU signifie GNU's Not Unix. C’est un projet initié par Richard Stallman pour créer un système d’exploitation libre compatible avec Unix.

Q03 : C’est quoi le problème avec GCC, au fait ?

GCC peut parfois générer des messages d’erreur difficiles à comprendre, surtout pour les débutants. Aussi, il est strict sur certaines règles du langage, ce qui peut surprendre.

Q04 : Comment GCC est-il bon pour trouver des erreurs dans les programmes ?

GCC effectue une analyse syntaxique et sémantique poussée. Il détecte des erreurs comme des variables non initialisées, des types incompatibles, ou des erreurs de portée, aidant à corriger le code avant exécution.

Q05 : Pourquoi C est-il si laconique ?

Le langage C utilise des symboles courts (comme {} au lieu de begin/end) pour garder le langage simple et compact, favorisant la rapidité d’écriture et de compilation, au détriment parfois de la lisibilité.

Q06 : main se termine par exit(0) au lieu de return 0, est-ce pareil ?

Pas exactement, mais proche. return 0; termine la fonction main et signale au système que le programme s’est bien terminé. exit(0); termine immédiatement le programme, même si ce n’est pas dans main.

Q07 : Que se passe-t-il si main finit sans return ?

Depuis le standard C99, si main finit sans return, c’est équivalent à return 0; — le programme termine normalement.

Q08 : Le compilateur supprime-t-il un commentaire entièrement ou le remplace-t-il par un espace blanc ?

Le compilateur supprime totalement les commentaires, ils ne sont pas présents dans le code machine final.

Q09 : Comment savoir si mon programme a un commentaire non terminé ?

GCC affichera une erreur de syntaxe indiquant que le commentaire n’est pas fermé, souvent avec un message du type « end of file reached before end of comment ».

Q10 : Est-il légal d'imbriquer un commentaire dans un autre ?

Non, en C, les commentaires /* ... */ ne peuvent pas être imbriqués. Imbriquer provoque une erreur.

Q11 : D’où vient le nom du type float ?

float signifie nombre à virgule flottante (floating-point number), car la position de la virgule (point décimal) "flotte" pour représenter un large éventail de valeurs.

Q12 : Pourquoi les constantes à virgule flottante doivent-elles se terminer par f ?

Le suffixe f indique au compilateur que la constante est un float (simple précision). Sinon, par défaut, c’est un double (double précision), plus précis mais plus gourmand en mémoire.