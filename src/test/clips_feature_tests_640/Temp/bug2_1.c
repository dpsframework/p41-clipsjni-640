#include "bug.h"



/************************************/
/* FUNCTION LIST DEFINITION         */
/************************************/

struct functionDefinition P1_1[] = {
{&S1_1[306],"SetCurrentModuleCommand",4,SetCurrentModuleCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[1]},
{&S1_1[364],"GetCurrentModuleCommand",4,GetCurrentModuleCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[2]},
{&S1_1[216],"PPDefmoduleCommand",512,PPDefmoduleCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[3]},
{&S1_1[480],"ListDefmodulesCommand",512,ListDefmodulesCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[4]},
{&S1_1[282],"GetDefmoduleListFunction",16,GetDefmoduleListFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[5]},
{&S1_1[102],"ObjectMatchDelay",2047,ObjectMatchDelay,NULL,NULL,0,65535,0,0,0,0,&P1_1[6]},
{&S1_1[453],"DelayedQueryDoForAllInstances",2047,DelayedQueryDoForAllInstances,NULL,NULL,0,65535,0,0,0,0,&P1_1[7]},
{&S1_1[185],"QueryDoForAllInstances",2047,QueryDoForAllInstances,NULL,NULL,0,65535,0,0,0,0,&P1_1[8]},
{&S1_1[283],"QueryDoForInstance",2047,QueryDoForInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[9]},
{&S1_1[64],"QueryFindAllInstances",16,QueryFindAllInstances,NULL,NULL,0,65535,0,0,0,0,&P1_1[10]},
{&S1_1[297],"QueryFindInstance",16,QueryFindInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[11]},
{&S1_1[119],"AnyInstances",1024,AnyInstances,NULL,NULL,0,65535,0,0,0,0,&P1_1[12]},
{&S1_1[428],"GetQueryInstanceSlot",2047,GetQueryInstanceSlot,NULL,NULL,0,65535,0,0,0,0,&P1_1[13]},
{&S1_1[42],"GetQueryInstance",256,GetQueryInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[14]},
{&S1_1[275],"GetDefinstancesModuleCommand",4,GetDefinstancesModuleCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[15]},
{&S1_1[338],"GetDefinstancesListFunction",16,GetDefinstancesListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[16]},
{&S1_1[229],"ListDefinstancesCommand",512,ListDefinstancesCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[17]},
{&S1_1[118],"PPDefinstancesCommand",520,PPDefinstancesCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[18]},
{&S1_1[313],"UndefinstancesCommand",512,UndefinstancesCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[19]},
{&S1_1[336],"DynamicHandlerPutSlot",2047,DynamicHandlerPutSlot,NULL,&S1_1[395],1,65535,0,0,0,0,&P1_1[20]},
{&S1_1[195],"DynamicHandlerGetSlot",2047,DynamicHandlerGetSlot,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[21]},
{&S1_1[60],"DynamicHandlerPutSlot",2047,DynamicHandlerPutSlot,NULL,&S1_1[395],1,65535,0,0,0,0,&P1_1[22]},
{&S1_1[387],"DynamicHandlerGetSlot",2047,DynamicHandlerGetSlot,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[23]},
{&S1_1[59],"CallNextHandler",2047,CallNextHandler,NULL,NULL,0,65535,0,0,0,0,&P1_1[24]},
{&S1_1[308],"CallNextHandler",2047,CallNextHandler,NULL,NULL,0,0,0,0,0,0,&P1_1[25]},
{&S1_1[133],"NextHandlerAvailableFunction",1024,NextHandlerAvailableFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[26]},
{&S1_1[322],"ListDefmessageHandlersCommand",512,ListDefmessageHandlersCommand,NULL,&S1_1[19],0,2,0,0,0,0,&P1_1[27]},
{&S1_1[490],"PPDefmessageHandlerCommand",512,PPDefmessageHandlerCommand,NULL,&S1_1[19],2,4,0,0,0,0,&P1_1[28]},
{&S1_1[138],"PreviewSendCommand",512,PreviewSendCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[29]},
{&S1_1[57],"SendCommand",2047,SendCommand,NULL,&S1_1[351],2,65535,0,0,0,0,&P1_1[30]},
{&S1_1[21],"UndefmessageHandlerCommand",512,UndefmessageHandlerCommand,NULL,&S1_1[19],2,3,0,0,0,0,&P1_1[31]},
{&S1_1[396],"BinaryLoadInstancesCommand",2,BinaryLoadInstancesCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[32]},
{&S1_1[508],"BinarySaveInstancesCommand",2,BinarySaveInstancesCommand,NULL,&S1_1[407],1,65535,0,0,0,0,&P1_1[33]},
{&S1_1[383],"RestoreInstancesCommand",2,RestoreInstancesCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[34]},
{&S1_1[464],"LoadInstancesCommand",2,LoadInstancesCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[35]},
{&S1_1[328],"SaveInstancesCommand",2,SaveInstancesCommand,NULL,&S1_1[407],1,65535,0,0,0,0,&P1_1[36]},
{&S1_1[293],"MVSlotDeleteCommand",2047,MVSlotDeleteCommand,NULL,&S1_1[232],4,4,0,0,0,0,&P1_1[37]},
{&S1_1[373],"MVSlotInsertCommand",2047,MVSlotInsertCommand,NULL,&S1_1[214],4,65535,0,0,0,0,&P1_1[38]},
{&S1_1[37],"MVSlotReplaceCommand",2047,MVSlotReplaceCommand,NULL,&S1_1[430],5,65535,0,0,0,0,&P1_1[39]},
{&S1_1[397],"DirectMVDeleteCommand",1024,DirectMVDeleteCommand,NULL,&S1_1[274],3,3,0,0,0,0,&P1_1[40]},
{&S1_1[487],"DirectMVInsertCommand",1024,DirectMVInsertCommand,NULL,&S1_1[375],3,65535,0,0,0,0,&P1_1[41]},
{&S1_1[121],"DirectMVReplaceCommand",1024,DirectMVReplaceCommand,NULL,&S1_1[129],4,65535,0,0,0,0,&P1_1[42]},
{&S1_1[423],"MsgDuplicateMsgHandler",2047,MsgDuplicateMsgHandler,NULL,NULL,0,65535,0,0,0,0,&P1_1[43]},
{&S1_1[457],"DirectDuplicateMsgHandler",2047,DirectDuplicateMsgHandler,NULL,NULL,0,65535,0,0,0,0,&P1_1[44]},
{&S1_1[337],"MsgModifyMsgHandler",2047,MsgModifyMsgHandler,NULL,NULL,0,65535,0,0,0,0,&P1_1[45]},
{&S1_1[191],"DirectModifyMsgHandler",2047,DirectModifyMsgHandler,NULL,NULL,0,65535,0,0,0,0,&P1_1[46]},
{&S1_1[111],"MsgDuplicateInstance",2047,MsgDuplicateInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[47]},
{&S1_1[89],"InactiveMsgDuplicateInstance",2047,InactiveMsgDuplicateInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[48]},
{&S1_1[390],"DuplicateInstance",2047,DuplicateInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[49]},
{&S1_1[331],"InactiveDuplicateInstance",2047,InactiveDuplicateInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[50]},
{&S1_1[279],"MsgModifyInstance",2047,MsgModifyInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[51]},
{&S1_1[100],"InactiveMsgModifyInstance",2047,InactiveMsgModifyInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[52]},
{&S1_1[48],"ModifyInstance",2047,ModifyInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[53]},
{&S1_1[418],"InactiveModifyInstance",2047,InactiveModifyInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[54]},
{&S1_1[433],"ClassCommand",2047,ClassCommand,NULL,NULL,1,1,0,0,0,0,&P1_1[55]},
{&S1_1[193],"InstanceExistPCommand",1024,InstanceExistPCommand,NULL,&S1_1[88],1,1,0,0,0,0,&P1_1[56]},
{&S1_1[171],"InstancePCommand",1024,InstancePCommand,NULL,NULL,1,1,0,0,0,0,&P1_1[57]},
{&S1_1[507],"InstanceNameCommand",1280,InstanceNameCommand,NULL,&S1_1[467],1,1,0,0,0,0,&P1_1[58]},
{&S1_1[358],"InstanceNamePCommand",1024,InstanceNamePCommand,NULL,NULL,1,1,0,0,0,0,&P1_1[59]},
{&S1_1[370],"InstanceAddressPCommand",1024,InstanceAddressPCommand,NULL,NULL,1,1,0,0,0,0,&P1_1[60]},
{&S1_1[250],"InstanceAddressCommand",1152,InstanceAddressCommand,NULL,&S1_1[29],1,2,0,0,0,0,&P1_1[61]},
{&S1_1[425],"InstanceNameToSymbolFunction",4,InstanceNameToSymbolFunction,NULL,&S1_1[141],1,1,0,0,0,0,&P1_1[62]},
{&S1_1[243],"SymbolToInstanceNameFunction",2047,SymbolToInstanceNameFunction,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[63]},
{&S1_1[296],"PPInstanceCommand",512,PPInstanceCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[64]},
{&S1_1[172],"InstancesCommand",512,InstancesCommand,NULL,&S1_1[19],0,3,0,0,0,0,&P1_1[65]},
{&S1_1[143],"UnmakeInstanceCommand",1024,UnmakeInstanceCommand,NULL,&S1_1[440],1,65535,0,0,0,0,&P1_1[66]},
{&S1_1[224],"CreateInstanceHandler",1024,CreateInstanceHandler,NULL,NULL,0,0,0,0,0,0,&P1_1[67]},
{&S1_1[238],"DeleteInstanceCommand",1024,DeleteInstanceCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[68]},
{&S1_1[217],"InitSlotsCommand",2047,InitSlotsCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[69]},
{&S1_1[389],"MakeInstanceCommand",1280,MakeInstanceCommand,NULL,NULL,0,65535,0,0,0,0,&P1_1[70]},
{&S1_1[502],"InactiveMakeInstance",1280,InactiveMakeInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[71]},
{&S1_1[452],"InitializeInstanceCommand",1280,InitializeInstanceCommand,NULL,NULL,0,65535,0,0,0,0,&P1_1[72]},
{&S1_1[179],"InactiveInitializeInstance",1280,InactiveInitializeInstance,NULL,NULL,0,65535,0,0,0,0,&P1_1[73]},
{&S1_1[393],"SetClassDefaultsModeCommand",4,SetClassDefaultsModeCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[74]},
{&S1_1[461],"GetClassDefaultsModeCommand",4,GetClassDefaultsModeCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[75]},
{&S1_1[33],"GetDefclassModuleCommand",4,GetDefclassModuleCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[76]},
{&S1_1[458],"SlotDefaultValueCommand",2047,SlotDefaultValueCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[77]},
{&S1_1[40],"SlotDirectAccessPCommand",1024,SlotDirectAccessPCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[78]},
{&S1_1[465],"SlotPublicPCommand",1024,SlotPublicPCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[79]},
{&S1_1[22],"SlotInitablePCommand",1024,SlotInitablePCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[80]},
{&S1_1[249],"SlotWritablePCommand",1024,SlotWritablePCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[81]},
{&S1_1[476],"SlotCardinalityCommand",16,SlotCardinalityCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[82]},
{&S1_1[398],"SlotRangeCommand",16,SlotRangeCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[83]},
{&S1_1[359],"SlotAllowedClassesCommand",16,SlotAllowedClassesCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[84]},
{&S1_1[489],"SlotAllowedValuesCommand",16,SlotAllowedValuesCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[85]},
{&S1_1[344],"SlotTypesCommand",16,SlotTypesCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[86]},
{&S1_1[44],"SlotSourcesCommand",16,SlotSourcesCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[87]},
{&S1_1[349],"SlotFacetsCommand",16,SlotFacetsCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[88]},
{&S1_1[225],"SlotExistPCommand",1024,SlotExistPCommand,NULL,&S1_1[19],2,3,0,0,0,0,&P1_1[89]},
{&S1_1[456],"GetDefmessageHandlersListCmd",16,GetDefmessageHandlersListCmd,NULL,&S1_1[19],0,2,0,0,0,0,&P1_1[90]},
{&S1_1[105],"ClassSubclassesCommand",16,ClassSubclassesCommand,NULL,&S1_1[19],1,2,0,0,0,0,&P1_1[91]},
{&S1_1[286],"ClassSuperclassesCommand",16,ClassSuperclassesCommand,NULL,&S1_1[19],1,2,0,0,0,0,&P1_1[92]},
{&S1_1[182],"ClassSlotsCommand",16,ClassSlotsCommand,NULL,&S1_1[19],1,2,0,0,0,0,&P1_1[93]},
{&S1_1[496],"ClassReactivePCommand",1024,ClassReactivePCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[94]},
{&S1_1[160],"ClassAbstractPCommand",1024,ClassAbstractPCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[95]},
{&S1_1[170],"MessageHandlerExistPCommand",1024,MessageHandlerExistPCommand,NULL,&S1_1[19],2,3,0,0,0,0,&P1_1[96]},
{&S1_1[269],"ClassExistPCommand",1024,ClassExistPCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[97]},
{&S1_1[181],"SubclassPCommand",1024,SubclassPCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[98]},
{&S1_1[130],"SuperclassPCommand",1024,SuperclassPCommand,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[99]},
{&S1_1[208],"GetDefclassListFunction",16,GetDefclassListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[100]},
{&S1_1[422],"BrowseClassesCommand",512,BrowseClassesCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[101]},
{&S1_1[236],"DescribeClassCommand",512,DescribeClassCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[102]},
{&S1_1[434],"PPDefclassCommand",520,PPDefclassCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[103]},
{&S1_1[454],"ListDefclassesCommand",512,ListDefclassesCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[104]},
{&S1_1[438],"UndefclassCommand",512,UndefclassCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[105]},
{&S1_1[466],"DeftemplateSlotFacetValueFunction",2047,DeftemplateSlotFacetValueFunction,NULL,&S1_1[19],3,3,0,0,0,0,&P1_1[106]},
{&S1_1[120],"DeftemplateSlotFacetExistPFunction",1024,DeftemplateSlotFacetExistPFunction,NULL,&S1_1[19],3,3,0,0,0,0,&P1_1[107]},
{&S1_1[320],"DeftemplateSlotDefaultPFunction",4,DeftemplateSlotDefaultPFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[108]},
{&S1_1[367],"DeftemplateSlotExistPFunction",1024,DeftemplateSlotExistPFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[109]},
{&S1_1[74],"DeftemplateSlotSinglePFunction",1024,DeftemplateSlotSinglePFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[110]},
{&S1_1[63],"DeftemplateSlotMultiPFunction",1024,DeftemplateSlotMultiPFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[111]},
{&S1_1[314],"DeftemplateSlotTypesFunction",2047,DeftemplateSlotTypesFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[112]},
{&S1_1[357],"DeftemplateSlotRangeFunction",2047,DeftemplateSlotRangeFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[113]},
{&S1_1[276],"DeftemplateSlotAllowedValuesFunction",2047,DeftemplateSlotAllowedValuesFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[114]},
{&S1_1[237],"DeftemplateSlotCardinalityFunction",2047,DeftemplateSlotCardinalityFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[115]},
{&S1_1[347],"DeftemplateSlotDefaultValueFunction",2047,DeftemplateSlotDefaultValueFunction,NULL,&S1_1[19],2,2,0,0,0,0,&P1_1[116]},
{&S1_1[309],"DeftemplateSlotNamesFunction",1040,DeftemplateSlotNamesFunction,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[117]},
{&S1_1[301],"DuplicateCommand",1088,DuplicateCommand,NULL,&S1_1[388],0,65535,0,0,0,0,&P1_1[118]},
{&S1_1[381],"ModifyCommand",1088,ModifyCommand,NULL,&S1_1[388],0,65535,0,0,0,0,&P1_1[119]},
{&S1_1[486],"PPDeftemplateCommand",520,PPDeftemplateCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[120]},
{&S1_1[325],"ListDeftemplatesCommand",512,ListDeftemplatesCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[121]},
{&S1_1[504],"DeftemplateModuleFunction",4,DeftemplateModuleFunction,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[122]},
{&S1_1[474],"UndeftemplateCommand",512,UndeftemplateCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[123]},
{&S1_1[174],"GetDeftemplateListFunction",16,GetDeftemplateListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[124]},
{&S1_1[378],"DelayedQueryDoForAllFacts",2047,DelayedQueryDoForAllFacts,NULL,NULL,0,65535,0,0,0,0,&P1_1[125]},
{&S1_1[298],"QueryDoForAllFacts",2047,QueryDoForAllFacts,NULL,NULL,0,65535,0,0,0,0,&P1_1[126]},
{&S1_1[38],"QueryDoForFact",2047,QueryDoForFact,NULL,NULL,0,65535,0,0,0,0,&P1_1[127]},
{&S1_1[35],"QueryFindAllFacts",16,QueryFindAllFacts,NULL,NULL,0,65535,0,0,0,0,&P1_1[128]},
{&S1_1[341],"QueryFindFact",16,QueryFindFact,NULL,NULL,0,65535,0,0,0,0,&P1_1[129]},
{&S1_1[278],"AnyFacts",1024,AnyFacts,NULL,NULL,0,65535,0,0,0,0,&P1_1[130]},
{&S1_1[192],"GetQueryFactSlot",2047,GetQueryFactSlot,NULL,NULL,0,65535,0,0,0,0,&P1_1[131]},
{&S1_1[374],"GetQueryFact",64,GetQueryFact,NULL,NULL,0,65535,0,0,0,0,&P1_1[132]},
{&S1_1[445],"FactAddresspFunction",1024,FactAddresspFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[133]},
{&S1_1[355],"PPFactFunction",520,PPFactFunction,NULL,&S1_1[470],1,3,0,0,0,0,&P1_1[134]},
{&S1_1[128],"GetFactListFunction",16,GetFactListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[135]},
{&S1_1[280],"FactSlotNamesFunction",2047,FactSlotNamesFunction,NULL,&S1_1[137],1,1,0,0,0,0,&P1_1[136]},
{&S1_1[25],"FactSlotValueFunction",2047,FactSlotValueFunction,NULL,&S1_1[497],2,2,0,0,0,0,&P1_1[137]},
{&S1_1[255],"FactRelationFunction",4,FactRelationFunction,NULL,&S1_1[137],1,1,0,0,0,0,&P1_1[138]},
{&S1_1[26],"FactExistpFunction",1024,FactExistpFunction,NULL,&S1_1[137],1,1,0,0,0,0,&P1_1[139]},
{&S1_1[403],"BinaryLoadFactsCommand",2,BinaryLoadFactsCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[140]},
{&S1_1[501],"BinarySaveFactsCommand",2,BinarySaveFactsCommand,NULL,&S1_1[407],1,65535,0,0,0,0,&P1_1[141]},
{&S1_1[405],"LoadFactsCommand",2,LoadFactsCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[142]},
{&S1_1[251],"SaveFactsCommand",2,SaveFactsCommand,NULL,&S1_1[407],1,65535,0,0,0,0,&P1_1[143]},
{&S1_1[221],"FactIndexFunction",2,FactIndexFunction,NULL,&S1_1[14],1,1,0,0,0,0,&P1_1[144]},
{&S1_1[319],"SetFactDuplicationCommand",1024,SetFactDuplicationCommand,NULL,NULL,1,1,0,0,0,0,&P1_1[145]},
{&S1_1[287],"GetFactDuplicationCommand",1024,GetFactDuplicationCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[146]},
{&S1_1[493],"AssertStringFunction",1088,AssertStringFunction,NULL,&S1_1[17],1,1,0,0,0,0,&P1_1[147]},
{&S1_1[27],"AssertStringFunction",1088,AssertStringFunction,NULL,&S1_1[17],1,1,0,0,0,0,&P1_1[148]},
{&S1_1[294],"RetractCommand",512,RetractCommand,NULL,&S1_1[68],1,65535,0,0,0,0,&P1_1[149]},
{&S1_1[399],"AssertCommand",1088,AssertCommand,NULL,NULL,0,65535,0,0,0,0,&P1_1[150]},
{&S1_1[379],"FactsCommand",512,FactsCommand,NULL,&S1_1[271],0,4,0,0,0,0,&P1_1[151]},
{&S1_1[284],"ShowDefglobalsCommand",512,ShowDefglobalsCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[152]},
{&S1_1[31],"GetResetGlobalsCommand",1024,GetResetGlobalsCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[153]},
{&S1_1[270],"SetResetGlobalsCommand",1024,SetResetGlobalsCommand,NULL,NULL,1,1,0,0,0,0,&P1_1[154]},
{&S1_1[34],"PPDefglobalCommand",520,PPDefglobalCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[155]},
{&S1_1[72],"ListDefglobalsCommand",512,ListDefglobalsCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[156]},
{&S1_1[339],"DefglobalModuleFunction",4,DefglobalModuleFunction,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[157]},
{&S1_1[241],"UndefglobalCommand",512,UndefglobalCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[158]},
{&S1_1[73],"GetDefglobalListFunction",16,GetDefglobalListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[159]},
{&S1_1[213],"GetDeffunctionModuleCommand",4,GetDeffunctionModuleCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[160]},
{&S1_1[210],"GetDeffunctionListFunction",16,GetDeffunctionListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[161]},
{&S1_1[125],"PPDeffunctionCommand",520,PPDeffunctionCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[162]},
{&S1_1[166],"ListDeffunctionsCommand",512,ListDeffunctionsCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[163]},
{&S1_1[117],"UndeffunctionCommand",512,UndeffunctionCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[164]},
{&S1_1[209],"ClassCommand",2047,ClassCommand,NULL,&S1_1[2],1,1,0,0,0,0,&P1_1[165]},
{&S1_1[205],"GetDefgenericModuleCommand",4,GetDefgenericModuleCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[166]},
{&S1_1[252],"GetMethodRestrictionsCommand",16,GetMethodRestrictionsCommand,NULL,&S1_1[274],2,2,0,0,0,0,&P1_1[167]},
{&S1_1[368],"GetDefmethodListCommand",16,GetDefmethodListCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[168]},
{&S1_1[122],"GetDefgenericListFunction",16,GetDefgenericListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[169]},
{&S1_1[135],"PreviewGeneric",512,PreviewGeneric,NULL,&S1_1[395],1,65535,0,0,0,0,&P1_1[170]},
{&S1_1[312],"ListDefmethodsCommand",512,ListDefmethodsCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[171]},
{&S1_1[317],"PPDefmethodCommand",512,PPDefmethodCommand,NULL,&S1_1[146],2,3,0,0,0,0,&P1_1[172]},
{&S1_1[424],"ListDefgenericsCommand",512,ListDefgenericsCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[173]},
{&S1_1[91],"PPDefgenericCommand",520,PPDefgenericCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[174]},
{&S1_1[234],"GetGenericCurrentArgument",2047,GetGenericCurrentArgument,NULL,NULL,0,65535,0,0,0,0,&P1_1[175]},
{&S1_1[176],"NextMethodPCommand",1024,NextMethodPCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[176]},
{&S1_1[420],"OverrideNextMethod",2047,OverrideNextMethod,NULL,NULL,0,65535,0,0,0,0,&P1_1[177]},
{&S1_1[348],"CallSpecificMethod",2047,CallSpecificMethod,NULL,&S1_1[375],2,65535,0,0,0,0,&P1_1[178]},
{&S1_1[335],"CallNextMethod",2047,CallNextMethod,NULL,NULL,0,0,0,0,0,0,&P1_1[179]},
{&S1_1[30],"UndefmethodCommand",512,UndefmethodCommand,NULL,&S1_1[268],2,2,0,0,0,0,&P1_1[180]},
{&S1_1[189],"UndefgenericCommand",512,UndefgenericCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[181]},
{&S1_1[158],"PPDeffactsCommand",520,PPDeffactsCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[182]},
{&S1_1[123],"ListDeffactsCommand",512,ListDeffactsCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[183]},
{&S1_1[444],"DeffactsModuleFunction",4,DeffactsModuleFunction,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[184]},
{&S1_1[161],"UndeffactsCommand",512,UndeffactsCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[185]},
{&S1_1[492],"GetDeffactsListFunction",16,GetDeffactsListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[186]},
{&S1_1[299],"SetStrategyCommand",4,SetStrategyCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[187]},
{&S1_1[446],"GetStrategyCommand",4,GetStrategyCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[188]},
{&S1_1[184],"SetBetaMemoryResizingCommand",1024,SetBetaMemoryResizingCommand,NULL,NULL,1,1,0,0,0,0,&P1_1[189]},
{&S1_1[290],"GetBetaMemoryResizingCommand",1024,GetBetaMemoryResizingCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[190]},
{&S1_1[116],"TimetagFunction",2,TimetagFunction,NULL,&S1_1[196],1,1,0,0,0,0,&P1_1[191]},
{&S1_1[115],"DependentsCommand",512,DependentsCommand,NULL,&S1_1[196],1,1,0,0,0,0,&P1_1[192]},
{&S1_1[187],"DependenciesCommand",512,DependenciesCommand,NULL,&S1_1[196],1,1,0,0,0,0,&P1_1[193]},
{&S1_1[107],"ListFocusStackCommand",512,ListFocusStackCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[194]},
{&S1_1[163],"JoinActivityResetCommand",512,JoinActivityResetCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[195]},
{&S1_1[43],"JoinActivityCommand",1040,JoinActivityCommand,NULL,&S1_1[19],1,2,0,0,0,0,&P1_1[196]},
{&S1_1[408],"MatchesCommand",1040,MatchesCommand,NULL,&S1_1[19],1,2,0,0,0,0,&P1_1[197]},
{&S1_1[307],"ShowBreaksCommand",512,ShowBreaksCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[198]},
{&S1_1[416],"RemoveBreakCommand",512,RemoveBreakCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[199]},
{&S1_1[272],"SetBreakCommand",512,SetBreakCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[200]},
{&S1_1[235],"GetFocusFunction",4,GetFocusFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[201]},
{&S1_1[291],"PopFocusFunction",4,PopFocusFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[202]},
{&S1_1[323],"GetFocusStackFunction",16,GetFocusStackFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[203]},
{&S1_1[318],"ClearFocusStackCommand",512,ClearFocusStackCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[204]},
{&S1_1[483],"FocusCommand",1024,FocusCommand,NULL,&S1_1[19],1,65535,0,0,0,0,&P1_1[205]},
{&S1_1[285],"HaltCommand",512,HaltCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[206]},
{&S1_1[106],"RunCommand",512,RunCommand,NULL,&S1_1[15],0,1,0,0,0,0,&P1_1[207]},
{&S1_1[447],"PPDefruleCommand",520,PPDefruleCommand,NULL,&S1_1[94],1,2,0,0,0,0,&P1_1[208]},
{&S1_1[55],"ListDefrulesCommand",512,ListDefrulesCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[209]},
{&S1_1[78],"ListDefrulesCommand",512,ListDefrulesCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[210]},
{&S1_1[254],"DefruleModuleFunction",4,DefruleModuleFunction,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[211]},
{&S1_1[479],"UndefruleCommand",512,UndefruleCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[212]},
{&S1_1[83],"GetDefruleListFunction",16,GetDefruleListFunction,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[213]},
{&S1_1[400],"AgendaCommand",512,AgendaCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[214]},
{&S1_1[261],"SetSalienceEvaluationCommand",4,SetSalienceEvaluationCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[215]},
{&S1_1[330],"GetSalienceEvaluationCommand",4,GetSalienceEvaluationCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[216]},
{&S1_1[300],"RefreshAgendaCommand",512,RefreshAgendaCommand,NULL,&S1_1[19],0,1,0,0,0,0,&P1_1[217]},
{&S1_1[326],"RefreshCommand",512,RefreshCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[218]},
{&S1_1[156],"ResetCommand",512,ResetCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[219]},
{&S1_1[417],"ClearCommand",512,ClearCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[220]},
{&S1_1[103],"SDCCommand",1024,SDCCommand,NULL,NULL,1,1,0,0,0,0,&P1_1[221]},
{&S1_1[468],"GDCCommand",1024,GDCCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[222]},
{&S1_1[265],"CheckSyntaxFunction",20,CheckSyntaxFunction,NULL,&S1_1[17],1,1,0,0,0,0,&P1_1[223]},
{&S1_1[391],"GetProfilePercentThresholdCommand",1,GetProfilePercentThresholdCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[224]},
{&S1_1[427],"SetProfilePercentThresholdCommand",1,SetProfilePercentThresholdCommand,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[225]},
{&S1_1[346],"ProfileResetCommand",512,ProfileResetCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[226]},
{&S1_1[194],"ProfileInfoCommand",512,ProfileInfoCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[227]},
{&S1_1[310],"ProfileCommand",512,ProfileCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[228]},
{&S1_1[113],"ConstructsToCCommand",512,ConstructsToCCommand,NULL,&S1_1[230],2,4,0,0,0,0,&P1_1[229]},
{&S1_1[180],"GetRegionCommand",8,GetRegionCommand,NULL,&S1_1[402],1,65535,0,0,0,0,&P1_1[230]},
{&S1_1[380],"PrintRegionCommand",1024,PrintRegionCommand,NULL,&S1_1[277],2,65535,0,0,0,0,&P1_1[231]},
{&S1_1[429],"TossCommand",1024,TossCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[232]},
{&S1_1[481],"FetchCommand",1026,FetchCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[233]},
{&S1_1[39],"RoundFunction",2,RoundFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[234]},
{&S1_1[62],"PowFunction",1,PowFunction,NULL,&S1_1[136],2,2,0,0,0,0,&P1_1[235]},
{&S1_1[455],"GradDegFunction",1,GradDegFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[236]},
{&S1_1[71],"DegGradFunction",1,DegGradFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[237]},
{&S1_1[167],"RadDegFunction",1,RadDegFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[238]},
{&S1_1[36],"DegRadFunction",1,DegRadFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[239]},
{&S1_1[144],"PiFunction",1,PiFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[240]},
{&S1_1[90],"SqrtFunction",1,SqrtFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[241]},
{&S1_1[311],"Log10Function",1,Log10Function,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[242]},
{&S1_1[327],"LogFunction",1,LogFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[243]},
{&S1_1[441],"ExpFunction",1,ExpFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[244]},
{&S1_1[449],"ModFunction",3,ModFunction,NULL,&S1_1[136],2,2,0,0,0,0,&P1_1[245]},
{&S1_1[473],"AcothFunction",1,AcothFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[246]},
{&S1_1[463],"AcschFunction",1,AcschFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[247]},
{&S1_1[20],"AsechFunction",1,AsechFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[248]},
{&S1_1[153],"AtanhFunction",1,AtanhFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[249]},
{&S1_1[32],"AsinhFunction",1,AsinhFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[250]},
{&S1_1[472],"AcoshFunction",1,AcoshFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[251]},
{&S1_1[499],"CothFunction",1,CothFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[252]},
{&S1_1[495],"CschFunction",1,CschFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[253]},
{&S1_1[41],"SechFunction",1,SechFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[254]},
{&S1_1[178],"TanhFunction",1,TanhFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[255]},
{&S1_1[66],"SinhFunction",1,SinhFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[256]},
{&S1_1[498],"CoshFunction",1,CoshFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[257]},
{&S1_1[245],"AcotFunction",1,AcotFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[258]},
{&S1_1[247],"AcscFunction",1,AcscFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[259]},
{&S1_1[262],"AsecFunction",1,AsecFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[260]},
{&S1_1[152],"Atan2Function",1,Atan2Function,NULL,&S1_1[136],2,2,0,0,0,0,&P1_1[261]},
{&S1_1[382],"AtanFunction",1,AtanFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[262]},
{&S1_1[266],"AsinFunction",1,AsinFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[263]},
{&S1_1[244],"AcosFunction",1,AcosFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[264]},
{&S1_1[201],"CotFunction",1,CotFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[265]},
{&S1_1[202],"CscFunction",1,CscFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[266]},
{&S1_1[211],"SecFunction",1,SecFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[267]},
{&S1_1[329],"TanFunction",1,TanFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[268]},
{&S1_1[215],"SinFunction",1,SinFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[269]},
{&S1_1[200],"CosFunction",1,CosFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[270]},
{&S1_1[23],"StrReplaceFunction",268,StrReplaceFunction,NULL,&S1_1[226],3,3,0,0,0,0,&P1_1[271]},
{&S1_1[484],"StringToFieldFunction",2047,StringToFieldFunction,NULL,&S1_1[226],1,1,0,0,0,0,&P1_1[272]},
{&S1_1[239],"BuildFunction",1024,BuildFunction,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[273]},
{&S1_1[108],"EvalFunction",2047,EvalFunction,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[274]},
{&S1_1[190],"StrIndexFunction",1026,StrIndexFunction,NULL,&S1_1[226],2,2,0,0,0,0,&P1_1[275]},
{&S1_1[246],"SubStringFunction",8,SubStringFunction,NULL,&S1_1[263],3,3,0,0,0,0,&P1_1[276]},
{&S1_1[204],"LowcaseFunction",268,LowcaseFunction,NULL,&S1_1[226],1,1,0,0,0,0,&P1_1[277]},
{&S1_1[410],"UpcaseFunction",268,UpcaseFunction,NULL,&S1_1[226],1,1,0,0,0,0,&P1_1[278]},
{&S1_1[260],"StrCompareFunction",2,StrCompareFunction,NULL,&S1_1[109],2,3,0,0,0,0,&P1_1[279]},
{&S1_1[377],"StrLengthFunction",2,StrLengthFunction,NULL,&S1_1[226],1,1,0,0,0,0,&P1_1[280]},
{&S1_1[149],"SymCatFunction",12,SymCatFunction,NULL,&S1_1[24],1,65535,0,0,0,0,&P1_1[281]},
{&S1_1[392],"StrCatFunction",12,StrCatFunction,NULL,&S1_1[24],1,65535,0,0,0,0,&P1_1[282]},
{&S1_1[343],"GetMvPrognIndex",2,GetMvPrognIndex,NULL,NULL,0,0,0,0,0,0,&P1_1[283]},
{&S1_1[165],"GetMvPrognField",2047,GetMvPrognField,NULL,NULL,0,0,0,0,0,0,&P1_1[284]},
{&S1_1[372],"ForeachFunction",2047,ForeachFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[285]},
{&S1_1[140],"MultifieldPrognFunction",2047,MultifieldPrognFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[286]},
{&S1_1[365],"SubsetpFunction",1024,SubsetpFunction,NULL,&S1_1[151],2,2,0,0,0,0,&P1_1[287]},
{&S1_1[267],"MemberFunction",1042,MemberFunction,NULL,&S1_1[148],2,2,0,0,0,0,&P1_1[288]},
{&S1_1[369],"NthFunction",495,NthFunction,NULL,&S1_1[500],2,2,0,0,0,0,&P1_1[289]},
{&S1_1[360],"ImplodeFunction",8,ImplodeFunction,NULL,&S1_1[16],1,1,0,0,0,0,&P1_1[290]},
{&S1_1[401],"ExplodeFunction",16,ExplodeFunction,NULL,&S1_1[17],1,1,0,0,0,0,&P1_1[291]},
{&S1_1[186],"InsertFunction",16,InsertFunction,NULL,&S1_1[352],3,65535,0,0,0,0,&P1_1[292]},
{&S1_1[219],"ReplaceFunction",16,ReplaceFunction,NULL,&S1_1[96],4,65535,0,0,0,0,&P1_1[293]},
{&S1_1[334],"DeleteFunction",16,DeleteFunction,NULL,&S1_1[273],3,3,0,0,0,0,&P1_1[294]},
{&S1_1[426],"ReplaceMemberFunction",16,ReplaceMemberFunction,NULL,&S1_1[394],3,65535,0,0,0,0,&P1_1[295]},
{&S1_1[203],"DeleteMemberFunction",16,DeleteMemberFunction,NULL,&S1_1[394],2,65535,0,0,0,0,&P1_1[296]},
{&S1_1[362],"SubseqFunction",16,SubseqFunction,NULL,&S1_1[273],3,3,0,0,0,0,&P1_1[297]},
{&S1_1[169],"RestFunction",16,RestFunction,NULL,&S1_1[16],1,1,0,0,0,0,&P1_1[298]},
{&S1_1[157],"FirstFunction",16,FirstFunction,NULL,&S1_1[16],1,1,0,0,0,0,&P1_1[299]},
{&S1_1[413],"ListWatchItemsCommand",512,ListWatchItemsCommand,NULL,&S1_1[395],0,65535,0,0,0,0,&P1_1[300]},
{&S1_1[61],"GetWatchItemCommand",1024,GetWatchItemCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[301]},
{&S1_1[363],"UnwatchCommand",512,UnwatchCommand,NULL,&S1_1[395],1,65535,0,0,0,0,&P1_1[302]},
{&S1_1[460],"WatchCommand",512,WatchCommand,NULL,&S1_1[395],1,65535,0,0,0,0,&P1_1[303]},
{&S1_1[324],"SortFunction",1040,SortFunction,NULL,&S1_1[395],1,65535,0,0,0,0,&P1_1[304]},
{&S1_1[459],"BloadCommand",1024,BloadCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[305]},
{&S1_1[503],"BsaveCommand",1024,BsaveCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[306]},
{&S1_1[114],"LoadStarCommand",1024,LoadStarCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[307]},
{&S1_1[505],"LoadCommand",1024,LoadCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[308]},
{&S1_1[58],"SaveCommand",1024,SaveCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[309]},
{&S1_1[477],"DribbleOffCommand",1024,DribbleOffCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[310]},
{&S1_1[333],"DribbleOnCommand",1024,DribbleOnCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[311]},
{&S1_1[253],"BatchStarCommand",1024,BatchStarCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[312]},
{&S1_1[340],"BatchCommand",1024,BatchCommand,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[313]},
{&S1_1[435],"MaxFunction",3,MaxFunction,NULL,&S1_1[136],1,65535,0,0,0,0,&P1_1[314]},
{&S1_1[442],"MinFunction",3,MinFunction,NULL,&S1_1[136],1,65535,0,0,0,0,&P1_1[315]},
{&S1_1[409],"AbsFunction",3,AbsFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[316]},
{&S1_1[164],"FloatFunction",1,FloatFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[317]},
{&S1_1[240],"IntegerFunction",2,IntegerFunction,NULL,&S1_1[136],1,1,0,0,0,0,&P1_1[318]},
{&S1_1[304],"DivFunction",2,DivFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[319]},
{&S1_1[6],"DivisionFunction",1,DivisionFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[320]},
{&S1_1[5],"SubtractionFunction",3,SubtractionFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[321]},
{&S1_1[3],"MultiplicationFunction",3,MultiplicationFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[322]},
{&S1_1[4],"AdditionFunction",3,AdditionFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[323]},
{&S1_1[431],"ExternalAddresspFunction",1024,ExternalAddresspFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[324]},
{&S1_1[350],"ExternalAddresspFunction",1024,ExternalAddresspFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[325]},
{&S1_1[86],"MultifieldpFunction",1024,MultifieldpFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[326]},
{&S1_1[51],"EvenpFunction",1024,EvenpFunction,NULL,&S1_1[15],1,1,0,0,0,0,&P1_1[327]},
{&S1_1[451],"OddpFunction",1024,OddpFunction,NULL,&S1_1[15],1,1,0,0,0,0,&P1_1[328]},
{&S1_1[450],"FloatpFunction",1024,FloatpFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[329]},
{&S1_1[207],"IntegerpFunction",1024,IntegerpFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[330]},
{&S1_1[150],"NumberpFunction",1024,NumberpFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[331]},
{&S1_1[386],"LexemepFunction",1024,LexemepFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[332]},
{&S1_1[162],"StringpFunction",1024,StringpFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[333]},
{&S1_1[212],"SymbolpFunction",1024,SymbolpFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[334]},
{&S1_1[50],"NumericNotEqualFunction",1024,NumericNotEqualFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[335]},
{&S1_1[82],"NumericNotEqualFunction",1024,NumericNotEqualFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[336]},
{&S1_1[9],"NumericEqualFunction",1024,NumericEqualFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[337]},
{&S1_1[10],"GreaterThanFunction",1024,GreaterThanFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[338]},
{&S1_1[8],"LessThanFunction",1024,LessThanFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[339]},
{&S1_1[85],"GreaterThanOrEqualFunction",1024,GreaterThanOrEqualFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[340]},
{&S1_1[81],"LessThanOrEqualFunction",1024,LessThanOrEqualFunction,NULL,&S1_1[136],2,65535,0,0,0,0,&P1_1[341]},
{&S1_1[76],"NeqFunction",1024,NeqFunction,NULL,NULL,2,65535,0,0,0,0,&P1_1[342]},
{&S1_1[126],"EqFunction",1024,EqFunction,NULL,NULL,2,65535,0,0,0,0,&P1_1[343]},
{&S1_1[142],"OrFunction",1024,OrFunction,NULL,NULL,2,65535,0,0,0,0,&P1_1[344]},
{&S1_1[419],"AndFunction",1024,AndFunction,NULL,NULL,2,65535,0,0,0,0,&P1_1[345]},
{&S1_1[95],"NotFunction",1024,NotFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[346]},
{&S1_1[345],"ChdirFunction",1024,ChdirFunction,NULL,&S1_1[147],0,1,0,0,0,0,&P1_1[347]},
{&S1_1[75],"ReadNumberFunction",15,ReadNumberFunction,NULL,&S1_1[127],0,1,0,0,0,0,&P1_1[348]},
{&S1_1[404],"SetLocaleFunction",12,SetLocaleFunction,NULL,&S1_1[80],0,1,0,0,0,0,&P1_1[349]},
{&S1_1[231],"ReadlineFunction",12,ReadlineFunction,NULL,&S1_1[127],0,1,0,0,0,0,&P1_1[350]},
{&S1_1[242],"FormatFunction",8,FormatFunction,NULL,&S1_1[281],2,65535,0,0,0,0,&P1_1[351]},
{&S1_1[101],"RenameFunction",1024,RenameFunction,NULL,&S1_1[147],2,2,0,0,0,0,&P1_1[352]},
{&S1_1[257],"RemoveFunction",1024,RemoveFunction,NULL,&S1_1[147],1,1,0,0,0,0,&P1_1[353]},
{&S1_1[52],"PutCharFunction",512,PutCharFunction,NULL,&S1_1[175],1,2,0,0,0,0,&P1_1[354]},
{&S1_1[99],"UngetCharFunction",2,UngetCharFunction,NULL,&S1_1[175],1,2,0,0,0,0,&P1_1[355]},
{&S1_1[478],"GetCharFunction",2,GetCharFunction,NULL,&S1_1[127],0,1,0,0,0,0,&P1_1[356]},
{&S1_1[47],"SeekFunction",1024,SeekFunction,NULL,&S1_1[98],3,3,0,0,0,0,&P1_1[357]},
{&S1_1[183],"TellFunction",1026,TellFunction,NULL,&S1_1[127],1,1,0,0,0,0,&P1_1[358]},
{&S1_1[154],"RewindFunction",1024,RewindFunction,NULL,&S1_1[127],1,1,0,0,0,0,&P1_1[359]},
{&S1_1[411],"FlushFunction",1024,FlushFunction,NULL,&S1_1[173],0,1,0,0,0,0,&P1_1[360]},
{&S1_1[218],"CloseFunction",1024,CloseFunction,NULL,&S1_1[173],0,1,0,0,0,0,&P1_1[361]},
{&S1_1[482],"OpenFunction",1024,OpenFunction,NULL,&S1_1[159],2,3,0,0,0,0,&P1_1[362]},
{&S1_1[414],"ReadFunction",495,ReadFunction,NULL,&S1_1[127],0,1,0,0,0,0,&P1_1[363]},
{&S1_1[233],"PrintlnFunction",512,PrintlnFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[364]},
{&S1_1[385],"PrintFunction",512,PrintFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[365]},
{&S1_1[437],"PrintoutFunction",512,PrintoutFunction,NULL,&S1_1[228],1,65535,0,0,0,0,&P1_1[366]},
{&S1_1[177],"VoidFunction",512,VoidFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[367]},
{&S1_1[376],"SetErrorFunction",512,SetErrorFunction,NULL,NULL,1,1,0,0,0,0,&P1_1[368]},
{&S1_1[28],"ClearErrorFunction",2047,ClearErrorFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[369]},
{&S1_1[491],"GetErrorFunction",2047,GetErrorFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[370]},
{&S1_1[49],"TimerFunction",1,TimerFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[371]},
{&S1_1[220],"CallFunction",2047,CallFunction,NULL,&S1_1[2],1,65535,0,0,0,0,&P1_1[372]},
{&S1_1[77],"NewFunction",2047,NewFunction,NULL,&S1_1[395],1,65535,0,0,0,0,&P1_1[373]},
{&S1_1[295],"FuncallFunction",2047,FuncallFunction,NULL,&S1_1[402],1,65535,0,0,0,0,&P1_1[374]},
{&S1_1[494],"GetFunctionListFunction",16,GetFunctionListFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[375]},
{&S1_1[256],"AproposCommand",512,AproposCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[376]},
{&S1_1[289],"CreateFunction",16,CreateFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[377]},
{&S1_1[462],"GetFunctionRestrictions",8,GetFunctionRestrictions,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[378]},
{&S1_1[506],"GetSORCommand",1024,GetSORCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[379]},
{&S1_1[67],"SetSORCommand",1024,SetSORCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[380]},
{&S1_1[45],"CauseEvaluationError",4,CauseEvaluationError,NULL,NULL,0,0,0,0,0,0,&P1_1[381]},
{&S1_1[199],"DummyExpandFuncMultifield",2047,DummyExpandFuncMultifield,NULL,&S1_1[16],1,1,0,0,0,0,&P1_1[382]},
{&S1_1[471],"ExpandFuncCall",2047,ExpandFuncCall,NULL,NULL,0,65535,0,0,0,0,&P1_1[383]},
{&S1_1[475],"OperatingSystemFunction",4,OperatingSystemFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[384]},
{&S1_1[443],"OptionsCommand",512,OptionsCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[385]},
{&S1_1[303],"MemRequestsCommand",2,MemRequestsCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[386]},
{&S1_1[110],"MemUsedCommand",2,MemUsedCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[387]},
{&S1_1[222],"ReleaseMemCommand",2,ReleaseMemCommand,NULL,NULL,0,0,0,0,0,0,&P1_1[388]},
{&S1_1[132],"ConserveMemCommand",512,ConserveMemCommand,NULL,&S1_1[19],1,1,0,0,0,0,&P1_1[389]},
{&S1_1[46],"SeedFunction",512,SeedFunction,NULL,&S1_1[15],1,1,0,0,0,0,&P1_1[390]},
{&S1_1[292],"RandomFunction",2,RandomFunction,NULL,&S1_1[15],0,2,0,0,0,0,&P1_1[391]},
{&S1_1[288],"GMTimeFunction",16,GMTimeFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[392]},
{&S1_1[206],"LocalTimeFunction",16,LocalTimeFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[393]},
{&S1_1[188],"TimeFunction",1,TimeFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[394]},
{&S1_1[439],"LengthFunction",2,LengthFunction,NULL,&S1_1[16],1,1,0,0,0,0,&P1_1[395]},
{&S1_1[145],"SystemCommand",6,SystemCommand,NULL,&S1_1[147],0,65535,0,0,0,0,&P1_1[396]},
{&S1_1[448],"SetgenFunction",2,SetgenFunction,NULL,&S1_1[15],1,1,0,0,0,0,&P1_1[397]},
{&S1_1[342],"GensymStarFunction",4,GensymStarFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[398]},
{&S1_1[197],"GensymFunction",4,GensymFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[399]},
{&S1_1[353],"ExitCommand",512,ExitCommand,NULL,&S1_1[15],0,1,0,0,0,0,&P1_1[400]},
{&S1_1[264],"SwitchFunction",2047,SwitchFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[401]},
{&S1_1[371],"BreakFunction",512,BreakFunction,NULL,NULL,0,0,0,0,0,0,&P1_1[402]},
{&S1_1[315],"ReturnFunction",2047,ReturnFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[403]},
{&S1_1[168],"PrognFunction",2047,PrognFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[404]},
{&S1_1[134],"BindFunction",2047,BindFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[405]},
{&S1_1[436],"GetLoopCount",2,GetLoopCount,NULL,NULL,1,1,0,0,0,0,&P1_1[406]},
{&S1_1[53],"LoopForCountFunction",2047,LoopForCountFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[407]},
{&S1_1[366],"WhileFunction",2047,WhileFunction,NULL,NULL,0,65535,0,0,0,0,&P1_1[408]},
{&S1_1[131],"IfFunction",2047,IfFunction,NULL,NULL,0,65535,0,0,0,0,NULL}};