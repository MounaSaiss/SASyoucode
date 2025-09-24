# 📘 Documentation C – Questions & Réponses

Bienvenue dans cette documentation qui regroupe **35 questions fréquentes** sur le langage **C** avec des réponses claires et détaillées.  
Chaque question est précédée de `Qx` et suivie de sa réponse.  

---

## ❓ Q1 : Différence entre `%i` et `%d`
✅ `%d` → toujours base 10.  
✅ `%i` → détecte la base (décimal, octal `0`, hexadécimal `0x`).  

---

## ❓ Q2 : Comment afficher `%` avec printf ?
✅ Écrire `%%`.  

---

## ❓ Q3 : Tabulations avec `\t`
✅ Dépendent du terminal (souvent multiples de **8 colonnes**).  

---

## ❓ Q4 : scanf avec entrée non numérique
✅ Arrête la lecture et laisse les caractères invalides dans le buffer.  

---

## ❓ Q5 : scanf et remise de caractères
✅ scanf "remet" dans le flux les caractères non utilisés pour que la prochaine lecture puisse les relire.  

---

## ❓ Q6 : scanf et ponctuation
✅ Les séparateurs comme `,` ou `;` bloquent scanf sauf si on les prévoit dans le format.  

---

## ❓ Q7 : Utiliser `%` avec float
✅ `%` est uniquement pour les entiers.  
👉 Pour modulo flottants, utiliser `fmod(x, y)` (dans `<math.h>`).  

---

## ❓ Q8 : `/` et `%` avec négatifs
✅ Le résultat dépend de l’implémentation mais en C99+, la division tronque vers 0 et `%` garde le signe du dividende.  

---

## ❓ Q9 : C a-t-il des rvalues ?
✅ Oui : une **rvalue** est une valeur temporaire (ex : résultat d’une expression).  

---

## ❓ Q10 : `v += e` vs `v = v + e`
✅ Pas équivalents si `v` a un effet de bord (ex : `a[i++] += 2;`).  

---

## ❓ Q11 : Pourquoi `++` et `--`
✅ Commodité et parfois optimisation, mais surtout lisibilité.  

---

## ❓ Q12 : ++ et -- avec float
✅ Oui, ils fonctionnent avec `float` et `double`.  

---

## ❓ Q13 : Préfixe vs Postfixe
✅ `++i` → incrémente puis retourne la nouvelle valeur.  
✅ `i++` → retourne l’ancienne valeur puis incrémente.  

---

## ❓ Q14 : = au lieu de ==
✅ Certains compilateurs offrent `-Wall -Wextra` pour signaler ces erreurs.  

---

## ❓ Q15 : Type de `(i > 0 ? i : f)`
✅ Le type est **float** (promotion).  

---

## ❓ Q16 : Autres formes de switch
✅ Oui, avec ou sans `default`, cas regroupés, etc.  

---

## ❓ Q17 : Indentation switch
✅ Pas de règle unique → cohérence avec le style du projet.  

---

## ❓ Q18 : Boucles infinies
✅ `for(;;)` est idiomatique, `while(1)` est plus lisible.  

---

## ❓ Q19 : Faut-il éviter `continue` ?
✅ Non, il est utile, mais à éviter en excès.  

---

## ❓ Q20 : Pourquoi `goto` est mauvais ?
✅ Rend le code spaghetti → difficile à maintenir.  

---

## ❓ Q21 : Instruction nulle (`;`)
✅ Utile pour boucles avec corps vide (ex : attendre une condition).  

---

## ❓ Q22 : Corps vide autrement
✅ On peut mettre `{}` ou un commentaire.  

---

## ❓ Q23 : %o et %x avec entiers signés
✅ Les entiers sont convertis en non signés pour l’affichage.  

---

## ❓ Q24 : Cas négatifs en octal/hex
✅ Interprétés via la représentation binaire (complément à deux).  

---

## ❓ Q25 : Pourquoi constantes flottantes = double
✅ Car plus de précision et historique des compilateurs.  

---

## ❓ Q26 : Constantes hex flottantes
✅ Syntaxe : `0x1.1p+2` → utile pour précision exacte en binaire.  

---

## ❓ Q27 : %lf vs %f
✅ `scanf("%lf")` → lit un `double`.  
✅ `printf("%f")` → affiche `double` (promotion automatique).  

---

## ❓ Q28 : Prononcer `char`
✅ Comme "car" ou "char" (caractère).  

---

## ❓ Q29 : char signé ou non
✅ Dépend du compilateur. Important pour comparer ou stocker >127.  

---

## ❓ Q30 : Entrée clavier et retour chariot
✅ Sous Unix : `\n`.  
✅ Sous Windows : `\r\n`.  
`C` traduit automatiquement.  

---

## ❓ Q31 : getchar vs scanf
✅ `getchar` est plus rapide et simple pour un seul caractère.  

---

## ❓ Q32 : Promotions intégrales
✅ Si `int` peut contenir la valeur → promotion en `int`.  
Sinon → promotion en `unsigned int`.  

---

## ❓ Q33 : Valeur trop grande
✅ Dépassement → résultat indéfini (wrap autour).  

---

## ❓ Q34 : typedef vs macro
✅ `typedef` respecte le typage.  
✅ `#define` ne fait que substitution de texte.  

---

## ❓ Q35 : sizeof détermination
✅ Généralement connu à la compilation.  
⚠️ Exception : tableaux à taille variable (C99).  

---
