#include "bug.h"

CLIPSLexeme S1_1[] = {
{{STRING_TYPE},NULL,1,1,0,0,40,"("},
{{STRING_TYPE},NULL,1,1,0,0,41,")"},
{{STRING_TYPE},&S1_1[3],3,1,0,0,42,"*"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42,"*"},
{{SYMBOL_TYPE},NULL,2,1,0,0,43,"+"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45,"-"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47,"/"},
{{STRING_TYPE},NULL,1,1,0,0,49,"1"},
{{SYMBOL_TYPE},NULL,2,1,0,0,60,"<"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61,"="},
{{SYMBOL_TYPE},NULL,2,1,0,0,62,">"},
{{SYMBOL_TYPE},NULL,2,1,0,0,65,"A"},
{{SYMBOL_TYPE},NULL,2,1,0,0,66,"B"},
{{SYMBOL_TYPE},NULL,2,1,0,0,67,"C"},
{{SYMBOL_TYPE},NULL,3,1,0,0,74,"delete"},
{{STRING_TYPE},NULL,2,1,0,0,102,"f"},
{{STRING_TYPE},NULL,8,1,0,0,108,"l"},
{{STRING_TYPE},NULL,6,1,0,0,109,"m"},
{{STRING_TYPE},NULL,5,1,0,0,115,"s"},
{{SYMBOL_TYPE},NULL,2,1,0,0,120,"x"},
{{STRING_TYPE},NULL,102,1,0,0,121,"y"},
{{SYMBOL_TYPE},NULL,2,1,0,0,183,"INTEGER"},
{{SYMBOL_TYPE},NULL,2,1,0,0,476,"slot-cardinality"},
{{SYMBOL_TYPE},NULL,2,1,0,0,500,"(message-modify)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,882,"unwatch"},
{{SYMBOL_TYPE},NULL,2,1,0,0,984,"fact-relation"},
{{SYMBOL_TYPE},NULL,2,1,0,0,1053,"next-methodp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,1093,"get-defmessage-handler-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,1155,"round"},
{{SYMBOL_TYPE},NULL,2,1,0,0,1610,"get-dynamic-constraint-checking"},
{{SYMBOL_TYPE},NULL,2,1,0,0,1654,"slot-replace$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,2118,"class-slots"},
{{SYMBOL_TYPE},NULL,2,1,0,0,2184,"evenp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,2322,"defgeneric-module"},
{{SYMBOL_TYPE},NULL,2,1,0,0,2338,"floatp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,2345,"str-index"},
{{SYMBOL_TYPE},NULL,2,1,0,0,2813,"stringp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3009,"deg-rad"},
{{STRING_TYPE},NULL,2,1,0,0,3062,"*;y;l;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3377,"ppdeftemplate"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3490,"EXTERNAL-ADDRESS"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3563,"sech"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3584,"ppdefgeneric"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3735,"multifieldp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3813,"seed"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3820,"seek"},
{{SYMBOL_TYPE},NULL,2,1,0,0,3831,"timetag"},
{{SYMBOL_TYPE},NULL,2,1,0,0,4252,"!="},
{{SYMBOL_TYPE},NULL,2,1,0,0,4400,"class-subclasses"},
{{SYMBOL_TYPE},NULL,2,1,0,0,4415,"active-make-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,4452,"ppdefmodule"},
{{SYMBOL_TYPE},NULL,3,1,0,0,4548,"init"},
{{SYMBOL_TYPE},NULL,2,1,0,0,4704,"self"},
{{SYMBOL_TYPE},NULL,2,1,0,0,4813,"set-break"},
{{SYMBOL_TYPE},NULL,4,1,0,0,4894,"put-x"},
{{SYMBOL_TYPE},NULL,2,1,0,0,4945,"save-facts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,4956,"send"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5016,"save"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5052,"slot-default-value"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5159,"set-beta-memory-resizing"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5373,"slot-range"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5376,"**"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5395,"rules"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5440,"dynamic-put"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5696,"set-current-module"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5892,"(gnrc-current-arg)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,5917,"sinh"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6072,"deftemplate-slot-facet-value"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6097,"list-defglobals"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6131,"any-factp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6144,"instance-address"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6266,"dependencies"},
{{STRING_TYPE},NULL,2,1,0,0,6461,"fly"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6629,"bug"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6684,"set-sequence-operator-recognition"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6880,"SYMBOL"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6903,"do-for-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,6960,"defrule-module"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7022,"switch"},
{{STRING_TYPE},NULL,2,1,0,0,7135,";iyn;yn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7197,"get-function-restrictions"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7298,"load-facts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7313,"conserve-mem"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7376,"instancep"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7379,"instances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7478,"neq"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7484,"new"},
{{STRING_TYPE},NULL,2,1,0,0,7608,";s"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7627,"remove-break"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7681,"<="},
{{SYMBOL_TYPE},NULL,2,1,0,0,7682,"<>"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7699,"initialize-instance"},
{{STRING_TYPE},NULL,2,1,0,0,7911,"*;syn;syn;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,7935,">="},
{{SYMBOL_TYPE},NULL,2,1,0,0,7981,"nil"},
{{STRING_TYPE},NULL,2,1,0,0,7994,"niy"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8006,"matches"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8351,"sqrt"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8488,"str-assert"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8492,"pop-focus"},
{{SYMBOL_TYPE},NULL,3,1,0,0,8606,"+oo"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8662,"TRUE"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8676,"set-profile-percent-threshold"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8751,"not"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8772,"undeftemplate"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8792,"fact-slot-names"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8897,"assert"},
{{SYMBOL_TYPE},NULL,2,1,0,0,8916,"batch"},
{{SYMBOL_TYPE},NULL,2,1,0,0,9118,"load*"},
{{SYMBOL_TYPE},NULL,2,1,0,0,9142,"remove"},
{{SYMBOL_TYPE},NULL,2,1,0,0,9254,"list-defmessage-handlers"},
{{SYMBOL_TYPE},NULL,2,1,0,0,9411,"funcall"},
{{SYMBOL_TYPE},NULL,2,1,0,0,9434,"delete$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,9591,"undefinstances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,9635,"str-replace"},
{{SYMBOL_TYPE},NULL,2,1,0,0,10192,"class-existp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,10315,"(get-progn$-index)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,10464,"run"},
{{SYMBOL_TYPE},NULL,2,1,0,0,10670,"expand$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,10918,"slot-direct-replace$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,11017,"eval"},
{{SYMBOL_TYPE},NULL,2,1,0,0,11242,"bload-instances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,11364,"undeffacts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,11769,"get-error"},
{{SYMBOL_TYPE},NULL,2,1,0,0,11954,"while"},
{{STRING_TYPE},NULL,2,1,0,0,11986,"*;iny;y;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12101,"find-all-instances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12263,"deftemplate-slot-facet-existp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12362,"active-duplicate-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12383,"set-class-defaults-mode"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12593,"active-modify-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12652,"set-fact-duplication"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12728,"message-duplicate"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12843,"MAIN"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12887,"pointerp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,12940,"eq"},
{{SYMBOL_TYPE},NULL,2,1,0,0,13145,"break"},
{{SYMBOL_TYPE},NULL,2,1,0,0,13179,"STRING"},
{{SYMBOL_TYPE},NULL,2,1,0,0,13261,"bsave-instances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,13434,"list-deffacts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,13437,"if"},
{{SYMBOL_TYPE},NULL,2,1,0,0,13497,"reset"},
{{SYMBOL_TYPE},NULL,2,1,0,0,13734,"bind"},
{{SYMBOL_TYPE},NULL,2,1,0,0,13765,"load-instances"},
{{STRING_TYPE},NULL,55,1,0,0,13816,"ld"},
{{STRING_TYPE},NULL,4,1,0,0,13818,"lf"},
{{SYMBOL_TYPE},NULL,3,1,0,0,13995,"is-a"},
{{STRING_TYPE},NULL,2,1,0,0,14091,"ny"},
{{SYMBOL_TYPE},NULL,2,1,0,0,14211,"or"},
{{SYMBOL_TYPE},NULL,2,1,0,0,14329,"pi"},
{{SYMBOL_TYPE},NULL,2,1,0,0,14431,"ppdefmessage-handler"},
{{SYMBOL_TYPE},NULL,2,1,0,0,14531,"float"},
{{STRING_TYPE},NULL,22,1,0,0,14726,"sy"},
{{SYMBOL_TYPE},NULL,2,1,0,0,14785,"get-deffunction-list"},
{{STRING_TYPE},NULL,2,1,0,0,14809,";*;m"},
{{SYMBOL_TYPE},NULL,2,1,0,0,14889,"duplicate"},
{{STRING_TYPE},NULL,2,1,0,0,14949,";m;m"},
{{SYMBOL_TYPE},NULL,2,1,0,0,15238,"progn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,15322,"rest$"},
{{STRING_TYPE},NULL,3,1,0,0,15612,"ldsyn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,15784,"save-instances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,16205,"return"},
{{SYMBOL_TYPE},NULL,2,1,0,0,16224,"set-reset-globals"},
{{SYMBOL_TYPE},NULL,2,1,0,0,16771,"slot-direct-insert$"},
{{SYMBOL_TYPE},&S1_1[165],2,1,0,0,16813,"set-strategy"},
{{SYMBOL_TYPE},NULL,2,1,0,0,16813,"list-deffunctions"},
{{SYMBOL_TYPE},NULL,2,1,0,0,16895,"next-handlerp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,16917,"instance-addressp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,17301,"delete-member$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,17326,"get-defgeneric-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,17331,"explode$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,17845,"deftemplate-module"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18017,"get-deffacts-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18018,"lexemep"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18162,"unget-char"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18344,"undefclass"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18419,"void"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18492,"str-compare"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18498,"tanh"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18514,"set-locale"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18560,"set-error"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18804,"message-modify"},
{{SYMBOL_TYPE},NULL,2,1,0,0,18997,"deftemplate-slot-cardinality"},
{{SYMBOL_TYPE},NULL,2,1,0,0,19205,"tell"},
{{SYMBOL_TYPE},NULL,2,1,0,0,19316,"sym-cat"},
{{STRING_TYPE},NULL,4,1,0,0,19842,"infly"},
{{SYMBOL_TYPE},NULL,2,1,0,0,19846,"options"},
{{SYMBOL_TYPE},NULL,2,1,0,0,19969,"string-to-field"},
{{SYMBOL_TYPE},NULL,2,1,0,0,20069,"slot-allowed-values"},
{{SYMBOL_TYPE},NULL,2,1,0,0,20234,"slot-direct-accessp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,20282,"time"},
{{SYMBOL_TYPE},NULL,2,1,0,0,20421,"system"},
{{SYMBOL_TYPE},NULL,2,1,0,0,20598,"loop-for-count"},
{{SYMBOL_TYPE},NULL,2,1,0,0,20860,"slot-delete$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,21430,"numberp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,21637,"direct-modify"},
{{SYMBOL_TYPE},NULL,2,1,0,0,21666,"dribble-off"},
{{SYMBOL_TYPE},NULL,2,1,0,0,21673,"do-for-fact"},
{{SYMBOL_TYPE},NULL,2,1,0,0,21696,"get"},
{{SYMBOL_TYPE},NULL,2,1,0,0,21996,"get-definstances-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,22008,"cos"},
{{SYMBOL_TYPE},NULL,2,1,0,0,22009,"cot"},
{{SYMBOL_TYPE},NULL,2,1,0,0,22038,"call-next-method"},
{{STRING_TYPE},NULL,2,1,0,0,22058,"*;l;l;syn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,22077,"deftemplate-slot-allowed-values"},
{{SYMBOL_TYPE},NULL,2,1,0,0,22194,"get-method-restrictions"},
{{SYMBOL_TYPE},NULL,2,1,0,0,22500,"csc"},
{{SYMBOL_TYPE},NULL,2,1,0,0,22794,"message-modify-instance"},
{{STRING_TYPE},NULL,2,1,0,0,22860,"*;sy;ldsyn;s"},
{{SYMBOL_TYPE},NULL,2,1,0,0,22983,"retract"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23209,"watch"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23275,"list-defgenerics"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23315,"list-defclasses"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23356,"get-char"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23557,"show-defglobals"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23563,"get-salience-evaluation"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23785,"(get-progn$-field)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23840,"close"},
{{SYMBOL_TYPE},NULL,2,1,0,0,23899,"bload"},
{{STRING_TYPE},NULL,2,1,0,0,23961,"*;y;l;ldsyn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24112,"deftemplate-slot-names"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24123,"acsch"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24149,"assert-string"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24491,"type"},
{{SYMBOL_TYPE},&S1_1[225],2,1,0,0,24550,"sec"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24550,"active-initialize-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24553,"INSTANCE"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24597,"get-sequence-operator-recognition"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24616,"(expansion-call)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24688,"external-addressp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,24949,"deftemplate-slot-types"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25005,"sub-string"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25042,"INSTANCE-ADDRESS"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25069,"sin"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25198,"acosh"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25312,"first$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25325,"acoth"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25488,"get-defmethod-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25760,"deftemplate-slot-singlep"},
{{SYMBOL_TYPE},NULL,2,1,0,0,25942,"defglobal-module"},
{{SYMBOL_TYPE},NULL,2,1,0,0,26069,"call"},
{{SYMBOL_TYPE},NULL,2,1,0,0,26513,"println"},
{{SYMBOL_TYPE},NULL,3,1,0,0,26603,"(QDS)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,26605,"ppdefinstances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,26691,"message-handler-existp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,26853,"deftemplate-slot-default-value"},
{{SYMBOL_TYPE},NULL,2,1,0,0,26906,"(query-fact-slot)"},
{{STRING_TYPE},NULL,7,1,0,0,27101,"syn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,27504,"deftemplate-slot-existp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,27574,"definstances-module"},
{{SYMBOL_TYPE},NULL,2,1,0,0,27806,"get-defmodule-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,27978,"slot-allowed-classes"},
{{SYMBOL_TYPE},NULL,2,1,0,0,28492,"progn$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,28912,"slot-existp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,28920,"preview-generic"},
{{STRING_TYPE},NULL,2,1,0,0,28986,";lf;y"},
{{SYMBOL_TYPE},NULL,2,1,0,0,29063,"str-length"},
{{SYMBOL_TYPE},NULL,2,1,0,0,29107,"symbolp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,29344,"bsave"},
{{SYMBOL_TYPE},NULL,2,1,0,0,29469,"bsave-facts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,29709,"get-fact-duplication"},
{{SYMBOL_TYPE},NULL,2,1,0,0,29725,"acos"},
{{SYMBOL_TYPE},NULL,2,1,0,0,29726,"acot"},
{{SYMBOL_TYPE},NULL,2,1,0,0,29854,"integerp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,30217,"acsc"},
{{SYMBOL_TYPE},NULL,2,1,0,0,30237,"asech"},
{{STRING_TYPE},NULL,3,1,0,0,30602,"synld"},
{{SYMBOL_TYPE},NULL,2,1,0,0,30614,"refresh-agenda"},
{{SYMBOL_TYPE},NULL,2,1,0,0,31074,"class-abstractp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,31097,"deftemplate-slot-range"},
{{SYMBOL_TYPE},NULL,2,1,0,0,31167,"FACT-ADDRESS"},
{{STRING_TYPE},NULL,2,1,0,0,31214,"*;m;l;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,31248,"fact-existp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,31794,"get-focus-stack"},
{{SYMBOL_TYPE},NULL,2,1,0,0,31822,"bload-facts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,32254,"duplicate-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,32267,"asec"},
{{SYMBOL_TYPE},NULL,2,1,0,0,32512,"join-activity-reset"},
{{SYMBOL_TYPE},NULL,2,1,0,0,32591,"asinh"},
{{SYMBOL_TYPE},NULL,2,1,0,0,32710,"get-defglobal-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,32786,"asin"},
{{SYMBOL_TYPE},NULL,2,1,0,0,32984,"profile-reset"},
{{SYMBOL_TYPE},NULL,2,1,0,0,33109,"get-beta-memory-resizing"},
{{STRING_TYPE},NULL,10,1,0,0,33192,";y;ldsyn"},
{{STRING_TYPE},NULL,2,1,0,0,33374,"l;*"},
{{SYMBOL_TYPE},NULL,2,1,0,0,33440,"readline"},
{{STRING_TYPE},NULL,3,1,0,0,33441,"l;m"},
{{STRING_TYPE},NULL,3,1,0,0,33453,"l;y"},
{{SYMBOL_TYPE},NULL,2,1,0,0,33488,"slot-publicp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,33528,"unmake-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,33568,"timer"},
{{SYMBOL_TYPE},NULL,2,1,0,0,33774,"get-current-module"},
{{STRING_TYPE},NULL,2,1,0,0,34922,"*;lf;ldsyn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,34993,"halt"},
{{SYMBOL_TYPE},NULL,2,1,0,0,35060,"override-next-method"},
{{SYMBOL_TYPE},NULL,2,1,0,0,35439,"str-cat"},
{{SYMBOL_TYPE},NULL,2,1,0,0,35518,"release-mem"},
{{SYMBOL_TYPE},NULL,2,1,0,0,35575,"gensym*"},
{{SYMBOL_TYPE},NULL,2,1,0,0,35636,"replace-member$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,35862,"log10"},
{{SYMBOL_TYPE},NULL,2,1,0,0,35869,"list-defmodules"},
{{SYMBOL_TYPE},NULL,2,1,0,0,35870,"foreach"},
{{SYMBOL_TYPE},NULL,2,1,0,0,36097,"set-salience-evaluation"},
{{SYMBOL_TYPE},NULL,2,1,0,0,36191,"insert$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,36618,"operating-system"},
{{SYMBOL_TYPE},NULL,2,1,0,0,36844,"profile"},
{{SYMBOL_TYPE},NULL,2,1,0,0,37060,"find-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,37084,"list-defrules"},
{{SYMBOL_TYPE},NULL,2,1,0,0,37267,"USER"},
{{SYMBOL_TYPE},NULL,2,1,0,0,37378,"div"},
{{SYMBOL_TYPE},NULL,2,1,0,0,37710,"constructs-to-c"},
{{SYMBOL_TYPE},NULL,2,1,0,0,37872,"deffunction-module"},
{{SYMBOL_TYPE},NULL,3,1,0,0,37978,"create"},
{{SYMBOL_TYPE},NULL,2,1,0,0,38259,"ADDRESS"},
{{SYMBOL_TYPE},NULL,2,1,0,0,38298,"call-next-handler"},
{{SYMBOL_TYPE},NULL,2,1,0,0,38411,"instance-name"},
{{SYMBOL_TYPE},NULL,2,1,0,0,38487,"undefgeneric"},
{{SYMBOL_TYPE},NULL,2,1,0,0,38530,"modify"},
{{SYMBOL_TYPE},NULL,2,1,0,0,38652,"list-definstances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,39247,"format"},
{{SYMBOL_TYPE},NULL,2,1,0,0,39472,"fact-slot-value"},
{{SYMBOL_TYPE},NULL,2,1,0,0,39652,"sort"},
{{SYMBOL_TYPE},NULL,2,1,0,0,39761,"(message-duplicate)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,39820,"gm-time"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40039,"log"},
{{SYMBOL_TYPE},&S1_1[326],2,1,0,0,40182,"tan"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40182,"dependents"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40447,"ppdeffacts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40527,"undefmethod"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40730,"class-superclasses"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40739,"(direct-duplicate)"},
{{STRING_TYPE},NULL,2,1,0,0,40810,"*;ldsyn;s"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40816,"apropos"},
{{SYMBOL_TYPE},NULL,3,1,0,0,40864,"-oo"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40979,"(get-loop-count)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,40982,"list-defmethods"},
{{SYMBOL_TYPE},NULL,2,1,0,0,41042,"agenda"},
{{SYMBOL_TYPE},NULL,2,1,0,0,41220,"make-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,41420,"chdir"},
{{SYMBOL_TYPE},NULL,2,1,0,0,41771,"put"},
{{SYMBOL_TYPE},NULL,2,1,0,0,41895,"put-name"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42059,"ppdeffunction"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42403,"fact-addressp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42515,"(direct-modify)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42530,"member$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42561,"get-focus"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42584,"get-defrule-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42693,"show-breaks"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42850,"find-fact"},
{{SYMBOL_TYPE},NULL,2,1,0,0,42853,"NUMBER"},
{{STRING_TYPE},NULL,7,1,0,0,42877,";ldsyn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,43260,"init-slots"},
{{STRING_TYPE},NULL,2,1,0,0,43407,"*;*;y"},
{{STRING_TYPE},NULL,2,1,0,0,43534,"*;m;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,43705,"class-reactivep"},
{{SYMBOL_TYPE},NULL,2,1,0,0,43750,"list-focus-stack"},
{{SYMBOL_TYPE},NULL,3,1,0,0,44040,"FALSE"},
{{SYMBOL_TYPE},NULL,2,1,0,0,44058,"set-dynamic-constraint-checking"},
{{SYMBOL_TYPE},NULL,2,1,0,0,44060,"local-time"},
{{SYMBOL_TYPE},NULL,2,1,0,0,44186,"slot-facets"},
{{SYMBOL_TYPE},NULL,2,1,0,0,44259,"get-defclass-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,44299,"exit"},
{{SYMBOL_TYPE},NULL,2,1,0,0,44932,"slot-initablep"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45085,"any-instancep"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45118,"atan2"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45172,"atanh"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45175,"clear-error"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45276,"integer"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45304,"facts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45398,"random"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45439,"get-function-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,45971,"print-region"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46002,"INSTANCE-NAME"},
{{STRING_TYPE},NULL,2,1,0,0,46128,"*;y;ly"},
{{STRING_TYPE},NULL,2,1,0,0,46188,";ldsyn;l;y"},
{{STRING_TYPE},NULL,3,1,0,0,46405,"*;y;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46472,"nth$"},
{{SYMBOL_TYPE},NULL,3,1,0,0,46477,"print"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46524,"rad-deg"},
{{STRING_TYPE},NULL,2,1,0,0,46532,"l;iny;y"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46570,"defclass-module"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46637,"superclassp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46645,"do-for-all-instances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46714,"get-deftemplate-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46807,"dribble-on"},
{{SYMBOL_TYPE},NULL,2,1,0,0,46957,"clear-focus-stack"},
{{STRING_TYPE},NULL,2,1,0,0,47017,"*;y;sy"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47043,"restore-instances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47427,"ppdefclass"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47454,"undeffunction"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47617,"slot-insert$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47706,"slot-writablep"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47777,"list-watch-items"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47899,"atan"},
{{SYMBOL_TYPE},NULL,2,1,0,0,47916,"printout"},
{{SYMBOL_TYPE},NULL,2,1,0,0,48256,"(query-fact)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,48324,"get-x"},
{{SYMBOL_TYPE},NULL,2,1,0,0,48371,"OBJECT"},
{{SYMBOL_TYPE},NULL,2,1,0,0,48379,"message-duplicate-instance"},
{{STRING_TYPE},NULL,3,1,0,0,48803,"*;lf"},
{{STRING_TYPE},NULL,3,1,0,0,48814,";ldsyn;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,48924,"dynamic-get"},
{{SYMBOL_TYPE},NULL,2,1,0,0,48955,"(query-instance-slot)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,49119,"get-region"},
{{STRING_TYPE},NULL,3,1,0,0,49430,"*;m"},
{{STRING_TYPE},NULL,9,1,0,0,49442,"*;y"},
{{STRING_TYPE},NULL,2,1,0,0,49485,"*;ldsyn"},
{{SYMBOL_TYPE},NULL,2,1,0,0,49527,"grad-deg"},
{{SYMBOL_TYPE},NULL,2,1,0,0,49572,"join-activity"},
{{STRING_TYPE},NULL,3,1,0,0,49711,"*;sy"},
{{SYMBOL_TYPE},NULL,2,1,0,0,49726,"delayed-do-for-all-instances"},
{{SYMBOL_TYPE},NULL,2,1,0,0,49831,"instance-name-to-symbol"},
{{SYMBOL_TYPE},NULL,2,1,0,0,50020,"flush"},
{{SYMBOL_TYPE},NULL,2,1,0,0,50053,"mem-requests"},
{{SYMBOL_TYPE},NULL,2,1,0,0,50372,"deffacts-module"},
{{STRING_TYPE},NULL,2,1,0,0,50447,"*;sy;l;sy;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,50535,"ppdefmethod"},
{{STRING_TYPE},NULL,5,1,0,0,50754,"y;sy"},
{{SYMBOL_TYPE},NULL,2,1,0,0,50882,"fact-index"},
{{SYMBOL_TYPE},NULL,2,1,0,0,50924,"rename"},
{{SYMBOL_TYPE},NULL,2,1,0,0,50954,"clear"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51105,"do-for-all-facts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51183,"preview-send"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51396,"override-next-handler"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51398,"slot-sources"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51462,"undefrule"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51519,"ppdefrule"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51579,"find-all-facts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51658,"abs"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51689,"get-reset-globals"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51697,"deg-grad"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51763,"undefglobal"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51871,"batch*"},
{{SYMBOL_TYPE},NULL,2,1,0,0,51990,"Temp/"},
{{SYMBOL_TYPE},NULL,2,1,0,0,52053,"instance-namep"},
{{SYMBOL_TYPE},NULL,2,1,0,0,52284,"class"},
{{SYMBOL_TYPE},NULL,2,1,0,0,52369,"read"},
{{SYMBOL_TYPE},NULL,2,1,0,0,52415,"check-syntax"},
{{SYMBOL_TYPE},NULL,2,1,0,0,52615,"object-pattern-match-delay"},
{{SYMBOL_TYPE},NULL,2,1,0,0,52731,"get-profile-percent-threshold"},
{{SYMBOL_TYPE},NULL,2,1,0,0,52906,"profile-info"},
{{SYMBOL_TYPE},NULL,2,1,0,0,53112,"upcase"},
{{SYMBOL_TYPE},NULL,2,1,0,0,53153,"implode$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,53167,"and"},
{{SYMBOL_TYPE},NULL,2,1,0,0,53511,"(set-evaluation-error)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,53573,"slot-direct-delete$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,53659,"instance-existp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,53785,"delete-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,54273,"toss"},
{{SYMBOL_TYPE},NULL,2,1,0,0,54407,"max"},
{{SYMBOL_TYPE},NULL,2,1,0,0,54643,"direct-duplicate"},
{{SYMBOL_TYPE},NULL,2,1,0,0,54975,"ppinstance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,55029,"active-message-modify-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,55040,"replace$"},
{{STRING_TYPE},NULL,2,1,0,0,55102,"iny"},
{{SYMBOL_TYPE},NULL,2,1,0,0,55406,"exp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,55413,"min"},
{{SYMBOL_TYPE},NULL,2,1,0,0,55726,"get-fact-list"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56112,"modify-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56124,"PRIMITIVE"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56165,"mod"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56244,"call-specific-method"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56301,"rewind"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56317,"create$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56509,"browse-classes"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56558,"length$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56575,"delayed-do-for-all-facts"},
{{SYMBOL_TYPE},NULL,2,1,0,0,56707,"oddp"},
{{STRING_TYPE},NULL,2,1,0,0,57378,"*;iny;y;l;l"},
{{SYMBOL_TYPE},NULL,2,1,0,0,57401,"put-char"},
{{SYMBOL_TYPE},NULL,2,1,0,0,57512,"fetch"},
{{SYMBOL_TYPE},NULL,2,1,0,0,57684,"focus"},
{{SYMBOL_TYPE},NULL,2,1,0,0,57737,"deftemplate-slot-defaultp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58229,"describe-class"},
{{STRING_TYPE},NULL,2,1,0,0,58284,"yin"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58448,"(query-instance)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58454,"read-number"},
{{SYMBOL_TYPE},NULL,3,1,0,0,58516,"name"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58804,"refresh"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58841,"LEXEME"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58874,"ppfact"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58924,"FLOAT"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58933,"get-strategy"},
{{SYMBOL_TYPE},NULL,2,1,0,0,58977,"build"},
{{SYMBOL_TYPE},NULL,2,1,0,0,59295,"active-message-duplicate-instance"},
{{SYMBOL_TYPE},NULL,2,1,0,0,59545,"MULTIFIELD"},
{{SYMBOL_TYPE},NULL,2,1,0,0,59600,"subclassp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,59703,"open"},
{{SYMBOL_TYPE},NULL,2,1,0,0,60591,"symbol-to-instance-name"},
{{SYMBOL_TYPE},NULL,2,1,0,0,60836,"gensym"},
{{SYMBOL_TYPE},NULL,2,1,0,0,60906,"deftemplate-slot-multip"},
{{SYMBOL_TYPE},NULL,2,1,0,0,60933,"put-is-a"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61008,"csch"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61031,"get-watch-item"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61185,"subseq$"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61642,"subsetp"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61682,"lowcase"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61742,"mem-used"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61771,"ppdefglobal"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61801,"list-deftemplates"},
{{SYMBOL_TYPE},NULL,1,1,0,0,61817,"defgeneric"},
{{SYMBOL_TYPE},NULL,2,1,0,0,61836,"(create-instance)"},
{{SYMBOL_TYPE},NULL,2,1,0,0,62083,"cosh"},
{{SYMBOL_TYPE},NULL,2,1,0,0,62210,"coth"},
{{STRING_TYPE},NULL,2,1,0,0,62379,";l;m"},
{{SYMBOL_TYPE},NULL,2,1,0,0,62784,"slot-types"},
{{SYMBOL_TYPE},NULL,2,1,0,0,62817,"undefmessage-handler"},
{{SYMBOL_TYPE},NULL,2,1,0,0,62837,"setgen"},
{{SYMBOL_TYPE},NULL,2,1,0,0,63130,"load"},
{{SYMBOL_TYPE},NULL,2,1,0,0,63408,"get-class-defaults-mode"}};
