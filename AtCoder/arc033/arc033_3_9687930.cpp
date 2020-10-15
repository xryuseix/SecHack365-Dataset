/*
問題文の引用元：https://atcoder.jp/contests/arc033/tasks/arc033_3
C - データ構造
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 数の集合 S に対する以下のクエリを処理してください。タイプ 1 ： S に数 X
を追加する。タイプ 2 ： S に含まれる数のうち X 番目に小さい数を答え、その数を S
から削除する。入力入力は以下の形式で標準入力から与えられる。QT_1 X_1T_2 X_2:T_Q
X_Q1 行目には、クエリの個数を表す整数 Q (1 ≦ Q ≦ 200,000) が与えられる。2
行目からの Q 行には、クエリの情報が与えられる。このうち i 行目では、2 つの整数
T_i (1 ≦ T_i ≦ 2), X_i (1 ≦ X_i ≦ 200,000) が空白区切りで与えられる。これは、T_i
= 1 の場合、「S に数 X_i
を追加する」というクエリを表す。ただし、クエリを処理する前の S には X_i
が含まれていないことが保証される。T_i = 2 の場合、「S に含まれる数のうち X_i
番目に小さい数を答え、その数を S
から削除する」というクエリを表す。ただし、クエリを処理する前の S
に含まれる数の個数が X_i 個以上であることが保証される。出力タイプ 2
のクエリの個数を Q_2 とすると、出力は Q_2 行からなる。このうち i
行目には、タイプ 2 のクエリのうち i
番目のものに対する答えを出力せよ。出力の末尾にも改行を入れること。



/*


   -J+J+JJ+JJ+++++++J++JJ+J++J+J+J+JJJJ+JJ+++++JJ+J+JJJ+J+JJ+JJ++JJ++J+JJ+JJ+JJJJ++J++J+JJ++++JJJ++JJJ+J++J++JJ++++JJJJJ++J++J++++JJJ++++J+JJJ+J+++++++++J+JJ+JJJJJJJJJJJ++JJJJJJJJJJJJJJJJJJJ+J.
    d##""H#"TMY"""HBWB"T#"HYHYWMYWMY"WYMMY"TMM""W#"TMYBYMYBMH@T@""B"WTWTY"YY"MBBT#YM"YBTW"YY"UBWW"TH9"B"T@Y"WM"T@W""BB"WBY@W"TBBM"WWB"#"T@"T#"TM"T#"W9""W@4#TM@""""""""""""""""""""""""""""""""M#}
     d#HU+.(4, ?&.  (S(0,.4,?o?&?Wo?H, ?o3X, .Wn. ?p ?h,>?h,cSO.(. (_.;I<1  >
1%( W Z_.O,( ._`(>(+ .z_.o..a[ dh-(Je.,+`.v_c.>.Cv(!,jf.J .= .= .#!.=.J!
.J!.=.dF                                 M#}
    d#r_4dn, 7&.?G,  (U(6,.4,?&7,?W,7h, T,Un.`7k, (h.?N,l?h,vSO.<.`1
((O,<`(..w(mHHNa.z.+.+NMMMms`.1d@"7CMb.H@=77MN3dMMMMMN.2/(!((t.C ,^ ,' JY J!.=`
.=.m(k#^                                  MN}
    d#r   ?XS..?G,-4,  -4J6,.4,7J4,4h,4n.(ojX, (H& .h.,N-i(h.v6G 1..o.agag.
>.MY`   TNy(MB^.&,.(M[(dM\  j#@(M\  .MEGM$   dNvJ.!J(%.= (` J`.d^.=./` .=-J!?N{`
M#}
    d#MN&.  _4Z&..4,.7,  .4J6,.4,4-O-4o(W, </wi  4n. 4,.HJo,h,zQMMBY""7??Mb
(M!.HMggMM8MF`(######%(d#  .M#NM#`  (#j##` `.#@J.!(J^.'.2 .? .F J!.^`.J!,^ .JM]
`                               ` M#}
    d#[ 7Mm,   ?wS, 7&.?i.`.4J4,(6,6(G?W,7h..1daJ.?k,.dMB""WMm,JM_     ` MM2M]
(M####N(Mb .WMM###%(MF  .###M% `.MSMM\ `.M#@(!JJ'.^.>`.'.J^.>./` .^.= .J~.#\ `
M#}
    d#@0, .TMa,  .4Z&.jm+ga.  7,3,(1,1gHMN/4gM"??7WMNM% ....dMn,M{
(gQM###NdN,..7"YMM(dMm,  ` ?H[dM!  d####` `(NW#F   JHMI!JJ!(!.^ (`.f`(!,'`.7.?`
,^.W#@                                 `   M#}
    d#r  7G, ?TNJ.`.H#"!`_?Hm.(dMMN,(u#) MNMY.&Mm.(M#F`J######K4M}   `
J####a(#Mm,   WNmgM#Ne   MPW#  .M###P `.M##M!  .M##!(J~J`,!.> .=.>.? ./~/! .^.V^
Mb   `                               ` M#}
    d#Bu,`  7&, ?WmM=`.., ` MMM` M#Mh,Mb`d#E d######Hb d###H###mH[
.+gMM#MY!W##N.  dMI####M~ .M1#HH#MM###m-.J###Ngg-H###(v_/ / .!.v!,~(! .!,! .>.Z^
.JX#               `` `  `               MN}
    d#r  7G, `.7&.M> .M##aJd###  M##MeWN J#t`M##H####N ,M###MY"M#L`  7!`  MM-
7"^`.j##-(TMY^.(MHN##"W##HMMTWM####"WM###HDv_>./ (`.=.>.!`.?.!`.?(v^ ./!.(N_
`    `    `        `   M#}
    d#fT-.  71,  d@` ,####H###N  d###### ,NL (####MMM#L`(M#MF .M#N
....+##NJ....g####NaJJgHH#####mJJ####L..M##Mt  (##M#F.!.!.~ J',~(`./-? .?(v^
./`.JgMN_ `        ` `  (WN-..Ja.`  `      ` M#}
    d#m, _7&,` ?1JN,` ?MMH###HM. ,MH##Mt .#N. ?MH#$ .H#e ` `
.d##MHMM#####H#H#H###H###H#H##H#HH######M##H###H###MHgJ#H##M<!,!.!.2.?.!
.~_`./(z^`.?`.jgD`.M:          `  j(+HM#"~dMB`           MN}
    d#kXWm.. ?1.  ?MN&.. ` ?M##|  .THB= `.##k.  _`
j###NgJ&M####HH#H#H#HH#H#H#HH##HHH#H#HH##HHHHHHHHHHHHHH#HHHH####H##M#!_ .`,!.~_
.!.! ,<J^`.?`.ud= .Z4N!              ?^ (N/^  `        `   MN}
    d#r ?4xTHa, ?=-.TM#Mp   -##b      `  g###NJ.
..H#####H####H##H###H#HMMMMM###H#H###H###H#H##H#H##H##H##HH##H#HH##H##Hb_ _
/_~.! __! ,~J! .<..uV^.-Y_(dN` `                dN.             ` MN}
    d#@I.. -7Ov9A..(OdM#M; `.###m.`` `  (##H#H#####HHH#HH#HHHH#HH#H#####p  `
?"WM####H#H##H#HH#H#HH#H#H#H#H#H#H#HH#H###% `.!.__ .~_ .~(! .ugMMM:.uN.<-!d@
.M%               M#}
    d#r `_71.. ?WMBW#NJ#@` `(H##MMmJ..+M#H#H#H#H##H##H##H#####H##H#H###9"`
(TMH###HH##H###H##H#H#H#####H###H##H#H<`(__.`.~.`.~.! .gM@!`d#MYXM?~.(#% `
`   `          `   MN}
    d#MHQ..  _7uM] `?""`  `.M#####H##H#H#H##H#H#HHH#HHH##H#H#H##H#H###Ma.`  `
?M##################H##H###H##H####._ _` ..`.~.! .gMY`    `  dN_!.(#
`  `  `` `         ` M#}
    d#NQyUWHmJ. dN. ` ` ` .M##HH##H#H#H#H#H##H####HH#H#HH#H#H#HH##H#####Ma.`  `
` MMY^?WMHH#MMHY""""""YHMMH##H##H##` `  _`  .! .(MD`   `  ` .M].<(M%
` `  (J. +.            M#}
    d#r?TUHXgVUWWMNJ....JH##HH#HH#H#HH#H#HHHH#HHH#H#H#H##H##H##H#H#HHH####MNg,.``
`` .-M=  ..J"=`               _7TM###]       ._ ._(#^        ` j#+dWMF
?N,?^.MD       `  ` MN}
    d#b-.
_7TWHAZVWMM######H###H##H#HH#H##H#H#H#H#H#HHH##H##H#########MM######MNa&J(H_..v"!
...   `                 ?WNJ.``      .d@`     ` `  (MSVGMD    `             `
-@!   `         M#}
    d#D(._71-.
?7TUkeVHM###H#H##HH#H#HH#HH#H#H#HH#HH##HHHHH#HH#HMMM}(M%.MHMM##H#####M#^
`?=jV"N `     ` `  `  `  `  ` TNe. `` .(M@`  `    `  (M^.d#^                   `
` .Y!` `         `  M#}
    d#L.  ?7+._?1(.. ?7TSdHM####H##H#H#H#H#H#HH#H#H#H#H##H#H####M#`
(!.M#######=(J` ..VM=..,   `  `   ..... `       .WN,... J#`    `` ` .dMmM9^
!                  M#}
    d#HWWX&-.. _?<._?<-.. ?7THM#H#H#HH#HH#H#H#HH#H#H#HHH##H#H##H)   `  `
?M###H#^.dnJV"H-,@"!.b  ` ... ` dN-`?4,`  `     XMY"WMM'`  `  `(MM##Na.. ``  `
`                 `   M#}
    d#KvCOwZVUXG+-.  ?~-.<<-. _?TMH#######HH#H#H#HH#H##HHH#H#HH#N.  `
...JH=(M##^ J=` .gMWWMN,  w,.-Y=_Ta. d!4, `?    ,`    ,h.gMN, `  `  `.HD-(7THNa,
``  `        `   ` `..  `` `           M#}
    d#K+Jv71Jv71OOOZXy+.. _!_.<!-._TMH#H#H#H#HH#H#HH#HH#H#HH#H#H#MVV"=?^.=.?(MD
.d! .X=  `  ?N_ `?^`  `.J7ND. (h,   ` W ` ` `(b_  W_ `  ..+#MMHN+(+z7MN+
`     (MNgNm.         `  M#}
    d#r~?7COOz++?<<+++1zOvOz(.. `_._~(TM########H##H#H#H#H#HH#HHMMI`(_.: {`(d'
.f! .=.x    . W!      `..MHBWMNx (4&.  W      `d[ uY`   d#WMY` d#"WN<<_(WN, ` `
` JB! .M=         `   M#}
    d#Ha-...   ~?71zz((<<_<<<+<z1+-..
`._TM#H#####H#H##H#H##H####N&~.-(-mVU@``.d!  .M#n...dN.7` `  ` .Y!   ` (WN,
?UJK       .@ .@ ` .Mb  `  `  MHWN; .JN;``        `  `,"` vM#`              MN}
    d#mJv777VUUuJ...   ??<1+((<~~:<<;<:-.. _TM##M##H#H##HHH#HH#H##NVY"!  .K`  J\
.dMH#######{        <J/ `     dN.   .D `    `.h.d^..M#THJ.`  `    JMN,.(dN.
.(#"M\ `          ` MN}
    d#b(.._??<<((+??7TOO&(... `~?<_____~___..._TMH##H#H##H#H#H#H##!    ` d!  .F
d#MH#H#####      ` .M#m....JMp.M{  `(\  `   `.P`.JM#M~.> T4a,      .dE..(N~ `
.J"`   `  `      `    MN}
    d#mJ...._!??<_.-_<<!~_(<?<<11-...  `__.-.````-TM###H#H#HH#H##N,     .t   d`
H^ W##MM#M^    `` jH##H######N ^  ` X`   `   .NM#N#MHJ-,!,_./4a. .JM9<_(dN,`
`  ``  ` `              ` MN}
    d#h((-+7""YYUAgJ-..._~!_---_~~___~<!~-.. `   `  ."MM##H##H#H##M)` ` X(...F
?>    .J@! `     .###H###H####  `  .F `     `(###M=  .W,^.?./<,TQMb<~~((+M]
.-.                M#}
    d#o.  ``  ~???<~~-(<?77T71+--...`` ` . ```` `      .TM##H##H###F   .PdF_7`
?` `     ``dB=d##H#M##M'     d`    `  .#W#@!     7L.? (~.>,MF_`` ..M\ `
` .MF`          `  ` MN}
    d#f?777"TTCIz++-......   ``````._~<!~~...             .TM#####Hb`  ,SH: `
`    "  `  `?!  ?"=!.MM^ ` ``.t   `  ` (aY^    `   (b--(.(&MY` ...(MF
`  .M}    `           MN}
    d#D<<<<(-..........`  `~~??!<!~~_....   `` ` `    `  `   .7MM##N   JCM-
`   R ..`  `         (Y`   ` .K`     ` .@`         ` ,N/(dMY_ ..__~_dN.
.M}             `  M#}
    d#NA&&JJ-(-............___~~`_``  ``   ``   `                7HM-  J}db ` `
`     ` _7^?aJD           `  `   d!  ``   .%   `      `   .MM= ......--_(M{ `
.M[                M#}
    d#KVOwrrwzOzz&&z++z++++<(?<<;<<<(<~_~._` `                  ` .M] `(] TN,`
`                 ` J\  `  `.J^            ` .Mt     ``_~_~~d@`
.M]`          `  ` MN}
    d#D?<<<<<<<<<<<<<!~~~~~~~~_```                         `      `dN.
.b`.M#m,.` `` `  `                  ` `  (%  ` ` .V!         `` ` .M=`
(d@` `            `   `   ` `           M#}
    d#n-(-_((<<<~~<!!!!!!~~!~____..._- ```       `              `  .ML
X,J##F7WNa..  `                     `  (%`  ` .J=  `           .d#!. .......
.uM=                 `   `   `          ` MN}
    d#P:<<?<?<<<<<<<<_--____~.__~_~_._.`  ``` ``                 `  (N,`.HMM%
(NTTWMNaJ-.. `` `  ` ` ` `` ..d^  ``.JY          ` `` .MY  ` ```   .MMN, `   `
`  ` `.Mr  dN_        `   M#}
    d#R1++(((-<<<<<<?!~~~__......-.._._.-..`` ``                    `db ` T%`
K(b?.(MMB=7TMMMmag+JJ((J+gHHH@` ` .J"   `         ` .H@` ` ` ` `````  (TN,
` d@` .M=             M#}
    d#L......((<??<<<((((--<??<<<<~~_....   ``    `             ``` (M^   `   `
R ,N.(F  j#6?_,!.=.dgY"`  .J=` ..Y^          `` `..H@!  ` ` ```        `?Mm.
`.F  `(' `         `  M#}
    d#m(JJzZYYYTTI<<_:<<<<__~!~~ ....._~_~```  ``  `   `  `  `  ` .MD
`?o` Tgb.V!&-(J&VY=dY`  ` .D-.JY=   ``          .gMY``  ` ``   `  `     `_(ML
`  ``(  ` ^ `             MN}
    d#D??1=z+<<<<?!~_....((++v<<<!_...__~~~._ `` `   `` `  `  ` .dB!      ``
j9Xgdm,  T""7!` `..J"`     ,"=!          ` ``` .+M9^        ````  -____--_--_zN_
.M@` J#{          `  ` MN}
    d#$` .....J+&AwVY77?~-..-(1+++<<<<~_```   ``` `    .+gHHaJj#B^   ` `   ` W
..Q!` M9XwVT"`  `       `            ...gM9!`    `  ` ````` ``-_~~_..-~?(M}`
`  `               M#}
    d#HkWVY""^~-...JzOOOzzOI+<<<___--.``      `` `` `.H@<> ? ?W#o...   `  `  H
.(Y4#!  `d;                         ` `.M@Tt           `` ``    ...  _!!_(<dM~
`                      `  M#}
    d#n..J&ZVUXAewUVC<<<__!~-.-~~ ...__..``        ` dN,~,`(.(-~/~+?dMM9GJ-..("!
.#-    .b                          `.MM`(\ `     ` ``  ````   ` ..``.~~-.dF
`  `      `             M#}
    d#NgdU9UV771+_<!~.._<!` .._!~._~` ..__``.. `  ``
?Mr^.^.(-,!,=(Y1,~,^,7.?174HUgQXTY""^  `   `           `    `  .M3H`J:    `  `
.. .     ...._`_..d#``  `                          `  ` M#}
    d#81&-<?!~..(??~ ...<<<..!!`.._:~~`.._!`.
..((gMBTA.y.((,:.=.?.,!.>.<.?_J$.>.?.?TYUQ+...`   `  `        ``  .dB!.# d~  `
` ````   _~-__.. `-__~~(dN+.. ` `                              M#}
    d#$..-?7!` ..-??_.-?!` ..(<_!`..(?` .(JJ-.-.gMY^(W,   ``?MN,~,`(..__,`-
(Y(,_,`(-(._/`-dj7TSa...`  `  `    `.&M^  .F X``  `  ` ``   ...  _<((<-.
_~-?77TMm   `                             M#}
    d#r`...+77_.-??! ..(<+<?~..-?!`.._`..?MMHVTMn   ` 4x
(MMNJs.J(.i,^.?(,-,!,^.((,!,!.@._<,^,?z"4m+-.  ``.+M=  ` .] K  `  ``     `
`-~..`.?7+J<i-. !~(MNe     `   `              ` `` ` M#}
    d#D?_..?7!  ..<1+??!...v=! ._!`..<!`._?Mm?h.,h.   `W,
...JHMMMMMMMMNgm.ggHp.l.G,?~,'.=d".(!.^.7.?J$!."7U+uM=  d  `j\ K    ` ` . _-.
_. __~..~.?7uJ?1+..MD`          `               ` ..M#}
    d#D!``...?I&?7` ..z7! ..?!`..(7`..~`._~_dNJW,,b ..JdMMH@"!`()
...?7"7!.MNM#"h(_.-_+`( (__<`+`(J3-`;`(-?MN,`d`  d~.b   ` _._  ._.~-.  . ~.
~_<_._~.(7GJd#! `` ` ` ` `        `  `` `.JM@TM#}
    d#mJ7O+?=` ..JY=` ..?! ..J=`..~`..<_~./<-?WMR.MMM"!J: ,]   J: `
d@"WNg.gM""h,  7Wa.o.z./(,~,^.?(?<,!,!.?(,UN.d   H .P _..`` ~- . _~__<-.`_.
~-._~(<-._(dMagMMMMHMHg-, `  ` `       .+M=  ?M#}
    d#9=` ..JY"! ..J<! ..J=` ._! ._<~~.?<,!_.~.H#Y!.D  J: (\   W  ., HN.. (Wr
?L  ` /M###Ma,!.=.?-,~,'.=.?b,W#_K  .@ .F  ._.-.- ~-~_._~~-?1(.__. !_.
?((TM=?~._78aJ7TMMMm, .+g,   ` .MD ?73jMN}
    d#nJV"=` ..?=``..J"! .,?`..?<<(.7<,?_.~_(!-?`.-(D `d~ J}` .#  ,F`,MP7h. ?b
`-b    .H#M###Nkl.+.._,m,x.(NdM{.@  .F ,%  ._.-___.__<__..~<:.?6-._<. _~.
_?-?i..?<._78QJvTMM#:(HR.  (Mh-7T&..W#}
    d#t  .-7^``..J"! ..?! .(1(!(J7i,<`.~-<<_-? ./! (% `X  d~  .F  .]  JMx 4,.Vb
d)   ..M#M9=TWM#agJJHM"YYMY!d`.]  ($ ()_ ._.-_-(<___.<-(_._<;<_?G,._~. _!-.
?iJ7(. ?i._79W&vTWQMMMNM9i._?7&JMN}
    d#K7!  ..J"! ..?^`..?i?!.J=(-7`.<-(<!./! .?` .~J} `K  W  `(% `J% `J7Mm,Wj}d-
,..m+HMB"!.#`    K``~~d:   K`.F J% `J\`J{_ ._ __.?<(+__~.?-<<- !><-_7n. _<.  ?+.
_7(?3-._7i.-7WNJJTWHN.. -?T&.M#}
    d#[..vY!  .J7` .J7-?~.v=(J=`.?<(1?-J> .J! .___`J:  @  H   g:  d{  d~
?WMNaJmHMB"=`,]   .]  ` .D    K`  .D .% d: `J: d!_
.~.._.~.?+?i_-~.?i<(i._<<z(?Tn, _<.. ?1.  ?1J7u.._7i..7WNaJ7THm..  W#}
    dN@^  ..7! ..?1J7-.Z=(J=`./~.1/!.v! .v! .?-/` ,W` .F .@   d`  d~  K  `
W?!`(%    J\  `J:   `(\ ` .@ ` J\ J: X`  d~`d~ ~.~--~.~.~.T,?i.<~-_1J(<.
??+1.?UA, _<..`?7-. ?7(JT&, ?7&,.7TNgJ7THmM#}
    d#L.v=` .-7+/^.(Y=.J=`.(!-1+^(J=`.(=` .!-?` ,`.K` ,] .b`  K   W` .b   `.K
`d:    d!`  d  `  J:  `.F   d:`W  H`  W` #<_.___._.-
_.<.4,?i.i/-.7J<Ji._<v+i,7Wa, _7-.`_7+,`.7O,?4J. ?T&..?TMmJMN}
    d#t`..vCJ7!.JY^.J=`.-^(Jz?_(f! .J=  .!.?` (!.!.@  ,% .F  .@   K  .]    .P`
K` `  W  ` K   ` X`   (\   K  # .@   K  b.?/-__._.-_._-__.4,?o,1_i.?&<(1.
?11v+_7Ha,`.=(.  71.  (TuJTG.. ?T&,.?MN}
    d#K7iJ=~.gY!.J"`..7-(1/^.v=` .Z^ .,!.?` ,!./`.JF `(\ .F `.P `.@ `-}  ` .$
.P     K`  .]     P ` `J:   D  F ,D  .@
.@_..+<.(-(.~.<.~.?,(4,?a.1-<.?GJi?i..7z1C-?THa. .7+.  ?4..  70.?4a,  ?4M#}
    d#8=..dY!.J"`..?~.CJ=-(Y! .JY! .(!.>  ,!.(! ,zd\` J} .]  ,t  .b  (` `  .\
.%   `.P   .\`    !   `J` ` '  \ (%  .b .](__ 1<.<i.~.__- <.<.?N,?n.<,<.(4,1J1,
?1CJI.?UN+. .7i.` _7+,` ?Ta,7U+.M#}
    d#mdY~.J"` .v!.vu7~.d=` .d=``./!.7  ,^ ,! .1zuW{``J_ ,] `(\ `,P`` `
``.```(:```  %``` ` ``` `` `  `` ``` ``(:` ,D .8.(/-
1(-((.~.?.<..-.1.?N,?n.7,<..T&?(7+..7JOv&,?WNJ.`.7&,``.7n, `.7UJ(MN}
    d##H#####H##H###HHH#H#H###H#H##MHHH##H#HHH#H####HHHH###H###H###H##H###H#H#H#HH#H##HHH##H#H#H#H#####HHHH#H#HHH#HH#H#MH#HH#HH#HH#HH#HH##H##H#HH#HH##HH#H###H##HHH##H##HH#H#HHH#HHHMH###H##M####{

*/
* /
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
#pragma GCC optimize("Ofast")
    using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

class Monoid {
public:
  // 単位元
  int unit;

  Monoid() {
    // 単位元
    unit = 0;
  }

  // 演算関数
  int calc(int a, int b) { return a + b; }
};

class SegmentTree {
public:
  // セグメント木の葉の要素数
  int n;

  // セグメント木
  vector<int> tree;

  // モノイド
  Monoid mono;

  SegmentTree(vector<int> &v) {
    n = 1 << (int)ceil(log2(v.size()));
    tree = vector<int>(n << 1);
    for (int i = 0; i < v.size(); i++) {
      update(i, v[i]);
    }
    for (int i = v.size(); i < n; i++) {
      update(i, mono.unit);
    }
  }

  // k番目の値(0-indexed)をxに変更
  void update(int k, int x) {
    k += n;
    tree[k] = x;
    for (k = k >> 1; k > 0; k >>= 1) {
      tree[k] = mono.calc(tree[k << 1 | 0], tree[k << 1 | 1]);
    }
  }
  // k番目の値(0-indexed)にxを足す変更
  void add(int k, int x) {
    k += n;
    tree[k] += x;
    for (k = k >> 1; k > 0; k >>= 1) {
      tree[k] = mono.calc(tree[k << 1 | 0], tree[k << 1 | 1]);
    }
  }

  // [l, r)の最小値(0-indexed)を求める．
  int query(int l, int r) {
    int res = mono.unit;
    l += n;
    r += n;
    while (l < r) {
      if (l & 1) {
        res = mono.calc(res, tree[l++]);
      }
      if (r & 1) {
        res = mono.calc(res, tree[--r]);
      }
      l >>= 1;
      r >>= 1;
    }
    return res;
  }
  int operator[](int k) {
    // st[i]で添字iの要素の値を返す
    if (k - n >= 0 || k < 0) {
      return -INF;
    }
    return tree[tree.size() - n + k];
  }

  void show() {
    int ret = 2;
    for (int i = 1; i < 2 * n; i++) {
      cout << tree[i] << " ";
      if (i == ret - 1) {
        cout << endl;
        ret <<= 1;
      }
    }
    cout << endl;
  }
};

// vector vの中のn以下の数で最大のものを返す
int bs(vector<int> v, int x) {
  int ok = -1; //これがx以下
  int ng = v.size(); // x以上
  // 問題によってokとngを入れ替える
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if (v[mid] <= x)
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

int main(void) {

  int q;
  cin >> q;
  set<int> s;
  vi v(200010, 0);
  SegmentTree st(v);
  rep(_, q) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      s.insert(t);
      st.update(x, st[x] + 1);
    } else {
      x--;
      int ok = -1, ng = 200010;
      for (int i = 0; i < 100; i++) {
        int mid = (ok + ng) / 2;
        if (st.query(0, mid + 1) <= x) {
          ok = mid;
        } else {
          ng = mid;
        }
      }
      cout << ng << endl;
      s.erase(ng);
      st.add(ng, -1);
    }
  }
}