#ifndef _CONSTRUCT_COMPILER_HEADER_
#define _CONSTRUCT_COMPILER_HEADER_

#include <stdio.h>
#include "setup.h"
#include "expressn.h"
#include "extnfunc.h"
#include "clips.h"

#define VS (void *)


/************************************/
/* EXTERNAL FUNCTION DEFINITIONS    */
/************************************/

extern void SetCurrentModuleCommand(Environment *,UDFContext *,UDFValue *);
extern void GetCurrentModuleCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDefmoduleCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDefmodulesCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefmoduleListFunction(Environment *,UDFContext *,UDFValue *);
extern void ObjectMatchDelay(Environment *,UDFContext *,UDFValue *);
extern void DelayedQueryDoForAllInstances(Environment *,UDFContext *,UDFValue *);
extern void QueryDoForAllInstances(Environment *,UDFContext *,UDFValue *);
extern void QueryDoForInstance(Environment *,UDFContext *,UDFValue *);
extern void QueryFindAllInstances(Environment *,UDFContext *,UDFValue *);
extern void QueryFindInstance(Environment *,UDFContext *,UDFValue *);
extern void AnyInstances(Environment *,UDFContext *,UDFValue *);
extern void GetQueryInstanceSlot(Environment *,UDFContext *,UDFValue *);
extern void GetQueryInstance(Environment *,UDFContext *,UDFValue *);
extern void GetDefinstancesModuleCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefinstancesListFunction(Environment *,UDFContext *,UDFValue *);
extern void ListDefinstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDefinstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void UndefinstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void DynamicHandlerPutSlot(Environment *,UDFContext *,UDFValue *);
extern void DynamicHandlerGetSlot(Environment *,UDFContext *,UDFValue *);
extern void DynamicHandlerPutSlot(Environment *,UDFContext *,UDFValue *);
extern void DynamicHandlerGetSlot(Environment *,UDFContext *,UDFValue *);
extern void CallNextHandler(Environment *,UDFContext *,UDFValue *);
extern void CallNextHandler(Environment *,UDFContext *,UDFValue *);
extern void NextHandlerAvailableFunction(Environment *,UDFContext *,UDFValue *);
extern void ListDefmessageHandlersCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDefmessageHandlerCommand(Environment *,UDFContext *,UDFValue *);
extern void PreviewSendCommand(Environment *,UDFContext *,UDFValue *);
extern void SendCommand(Environment *,UDFContext *,UDFValue *);
extern void UndefmessageHandlerCommand(Environment *,UDFContext *,UDFValue *);
extern void BinaryLoadInstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void BinarySaveInstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void RestoreInstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void LoadInstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void SaveInstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void MVSlotDeleteCommand(Environment *,UDFContext *,UDFValue *);
extern void MVSlotInsertCommand(Environment *,UDFContext *,UDFValue *);
extern void MVSlotReplaceCommand(Environment *,UDFContext *,UDFValue *);
extern void DirectMVDeleteCommand(Environment *,UDFContext *,UDFValue *);
extern void DirectMVInsertCommand(Environment *,UDFContext *,UDFValue *);
extern void DirectMVReplaceCommand(Environment *,UDFContext *,UDFValue *);
extern void MsgDuplicateMsgHandler(Environment *,UDFContext *,UDFValue *);
extern void DirectDuplicateMsgHandler(Environment *,UDFContext *,UDFValue *);
extern void MsgModifyMsgHandler(Environment *,UDFContext *,UDFValue *);
extern void DirectModifyMsgHandler(Environment *,UDFContext *,UDFValue *);
extern void MsgDuplicateInstance(Environment *,UDFContext *,UDFValue *);
extern void InactiveMsgDuplicateInstance(Environment *,UDFContext *,UDFValue *);
extern void DuplicateInstance(Environment *,UDFContext *,UDFValue *);
extern void InactiveDuplicateInstance(Environment *,UDFContext *,UDFValue *);
extern void MsgModifyInstance(Environment *,UDFContext *,UDFValue *);
extern void InactiveMsgModifyInstance(Environment *,UDFContext *,UDFValue *);
extern void ModifyInstance(Environment *,UDFContext *,UDFValue *);
extern void InactiveModifyInstance(Environment *,UDFContext *,UDFValue *);
extern void ClassCommand(Environment *,UDFContext *,UDFValue *);
extern void InstanceExistPCommand(Environment *,UDFContext *,UDFValue *);
extern void InstancePCommand(Environment *,UDFContext *,UDFValue *);
extern void InstanceNameCommand(Environment *,UDFContext *,UDFValue *);
extern void InstanceNamePCommand(Environment *,UDFContext *,UDFValue *);
extern void InstanceAddressPCommand(Environment *,UDFContext *,UDFValue *);
extern void InstanceAddressCommand(Environment *,UDFContext *,UDFValue *);
extern void InstanceNameToSymbolFunction(Environment *,UDFContext *,UDFValue *);
extern void SymbolToInstanceNameFunction(Environment *,UDFContext *,UDFValue *);
extern void PPInstanceCommand(Environment *,UDFContext *,UDFValue *);
extern void InstancesCommand(Environment *,UDFContext *,UDFValue *);
extern void UnmakeInstanceCommand(Environment *,UDFContext *,UDFValue *);
extern void CreateInstanceHandler(Environment *,UDFContext *,UDFValue *);
extern void DeleteInstanceCommand(Environment *,UDFContext *,UDFValue *);
extern void InitSlotsCommand(Environment *,UDFContext *,UDFValue *);
extern void MakeInstanceCommand(Environment *,UDFContext *,UDFValue *);
extern void InactiveMakeInstance(Environment *,UDFContext *,UDFValue *);
extern void InitializeInstanceCommand(Environment *,UDFContext *,UDFValue *);
extern void InactiveInitializeInstance(Environment *,UDFContext *,UDFValue *);
extern void SetClassDefaultsModeCommand(Environment *,UDFContext *,UDFValue *);
extern void GetClassDefaultsModeCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefclassModuleCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotDefaultValueCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotDirectAccessPCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotPublicPCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotInitablePCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotWritablePCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotCardinalityCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotRangeCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotAllowedClassesCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotAllowedValuesCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotTypesCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotSourcesCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotFacetsCommand(Environment *,UDFContext *,UDFValue *);
extern void SlotExistPCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefmessageHandlersListCmd(Environment *,UDFContext *,UDFValue *);
extern void ClassSubclassesCommand(Environment *,UDFContext *,UDFValue *);
extern void ClassSuperclassesCommand(Environment *,UDFContext *,UDFValue *);
extern void ClassSlotsCommand(Environment *,UDFContext *,UDFValue *);
extern void ClassReactivePCommand(Environment *,UDFContext *,UDFValue *);
extern void ClassAbstractPCommand(Environment *,UDFContext *,UDFValue *);
extern void MessageHandlerExistPCommand(Environment *,UDFContext *,UDFValue *);
extern void ClassExistPCommand(Environment *,UDFContext *,UDFValue *);
extern void SubclassPCommand(Environment *,UDFContext *,UDFValue *);
extern void SuperclassPCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefclassListFunction(Environment *,UDFContext *,UDFValue *);
extern void BrowseClassesCommand(Environment *,UDFContext *,UDFValue *);
extern void DescribeClassCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDefclassCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDefclassesCommand(Environment *,UDFContext *,UDFValue *);
extern void UndefclassCommand(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotFacetValueFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotFacetExistPFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotDefaultPFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotExistPFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotSinglePFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotMultiPFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotTypesFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotRangeFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotAllowedValuesFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotCardinalityFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotDefaultValueFunction(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateSlotNamesFunction(Environment *,UDFContext *,UDFValue *);
extern void DuplicateCommand(Environment *,UDFContext *,UDFValue *);
extern void ModifyCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDeftemplateCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDeftemplatesCommand(Environment *,UDFContext *,UDFValue *);
extern void DeftemplateModuleFunction(Environment *,UDFContext *,UDFValue *);
extern void UndeftemplateCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDeftemplateListFunction(Environment *,UDFContext *,UDFValue *);
extern void DelayedQueryDoForAllFacts(Environment *,UDFContext *,UDFValue *);
extern void QueryDoForAllFacts(Environment *,UDFContext *,UDFValue *);
extern void QueryDoForFact(Environment *,UDFContext *,UDFValue *);
extern void QueryFindAllFacts(Environment *,UDFContext *,UDFValue *);
extern void QueryFindFact(Environment *,UDFContext *,UDFValue *);
extern void AnyFacts(Environment *,UDFContext *,UDFValue *);
extern void GetQueryFactSlot(Environment *,UDFContext *,UDFValue *);
extern void GetQueryFact(Environment *,UDFContext *,UDFValue *);
extern void FactAddresspFunction(Environment *,UDFContext *,UDFValue *);
extern void PPFactFunction(Environment *,UDFContext *,UDFValue *);
extern void GetFactListFunction(Environment *,UDFContext *,UDFValue *);
extern void FactSlotNamesFunction(Environment *,UDFContext *,UDFValue *);
extern void FactSlotValueFunction(Environment *,UDFContext *,UDFValue *);
extern void FactRelationFunction(Environment *,UDFContext *,UDFValue *);
extern void FactExistpFunction(Environment *,UDFContext *,UDFValue *);
extern void BinaryLoadFactsCommand(Environment *,UDFContext *,UDFValue *);
extern void BinarySaveFactsCommand(Environment *,UDFContext *,UDFValue *);
extern void LoadFactsCommand(Environment *,UDFContext *,UDFValue *);
extern void SaveFactsCommand(Environment *,UDFContext *,UDFValue *);
extern void FactIndexFunction(Environment *,UDFContext *,UDFValue *);
extern void SetFactDuplicationCommand(Environment *,UDFContext *,UDFValue *);
extern void GetFactDuplicationCommand(Environment *,UDFContext *,UDFValue *);
extern void AssertStringFunction(Environment *,UDFContext *,UDFValue *);
extern void AssertStringFunction(Environment *,UDFContext *,UDFValue *);
extern void RetractCommand(Environment *,UDFContext *,UDFValue *);
extern void AssertCommand(Environment *,UDFContext *,UDFValue *);
extern void FactsCommand(Environment *,UDFContext *,UDFValue *);
extern void ShowDefglobalsCommand(Environment *,UDFContext *,UDFValue *);
extern void GetResetGlobalsCommand(Environment *,UDFContext *,UDFValue *);
extern void SetResetGlobalsCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDefglobalCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDefglobalsCommand(Environment *,UDFContext *,UDFValue *);
extern void DefglobalModuleFunction(Environment *,UDFContext *,UDFValue *);
extern void UndefglobalCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefglobalListFunction(Environment *,UDFContext *,UDFValue *);
extern void GetDeffunctionModuleCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDeffunctionListFunction(Environment *,UDFContext *,UDFValue *);
extern void PPDeffunctionCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDeffunctionsCommand(Environment *,UDFContext *,UDFValue *);
extern void UndeffunctionCommand(Environment *,UDFContext *,UDFValue *);
extern void ClassCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefgenericModuleCommand(Environment *,UDFContext *,UDFValue *);
extern void GetMethodRestrictionsCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefmethodListCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefgenericListFunction(Environment *,UDFContext *,UDFValue *);
extern void PreviewGeneric(Environment *,UDFContext *,UDFValue *);
extern void ListDefmethodsCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDefmethodCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDefgenericsCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDefgenericCommand(Environment *,UDFContext *,UDFValue *);
extern void GetGenericCurrentArgument(Environment *,UDFContext *,UDFValue *);
extern void NextMethodPCommand(Environment *,UDFContext *,UDFValue *);
extern void OverrideNextMethod(Environment *,UDFContext *,UDFValue *);
extern void CallSpecificMethod(Environment *,UDFContext *,UDFValue *);
extern void CallNextMethod(Environment *,UDFContext *,UDFValue *);
extern void UndefmethodCommand(Environment *,UDFContext *,UDFValue *);
extern void UndefgenericCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDeffactsCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDeffactsCommand(Environment *,UDFContext *,UDFValue *);
extern void DeffactsModuleFunction(Environment *,UDFContext *,UDFValue *);
extern void UndeffactsCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDeffactsListFunction(Environment *,UDFContext *,UDFValue *);
extern void SetStrategyCommand(Environment *,UDFContext *,UDFValue *);
extern void GetStrategyCommand(Environment *,UDFContext *,UDFValue *);
extern void SetBetaMemoryResizingCommand(Environment *,UDFContext *,UDFValue *);
extern void GetBetaMemoryResizingCommand(Environment *,UDFContext *,UDFValue *);
extern void TimetagFunction(Environment *,UDFContext *,UDFValue *);
extern void DependentsCommand(Environment *,UDFContext *,UDFValue *);
extern void DependenciesCommand(Environment *,UDFContext *,UDFValue *);
extern void ListFocusStackCommand(Environment *,UDFContext *,UDFValue *);
extern void JoinActivityResetCommand(Environment *,UDFContext *,UDFValue *);
extern void JoinActivityCommand(Environment *,UDFContext *,UDFValue *);
extern void MatchesCommand(Environment *,UDFContext *,UDFValue *);
extern void ShowBreaksCommand(Environment *,UDFContext *,UDFValue *);
extern void RemoveBreakCommand(Environment *,UDFContext *,UDFValue *);
extern void SetBreakCommand(Environment *,UDFContext *,UDFValue *);
extern void GetFocusFunction(Environment *,UDFContext *,UDFValue *);
extern void PopFocusFunction(Environment *,UDFContext *,UDFValue *);
extern void GetFocusStackFunction(Environment *,UDFContext *,UDFValue *);
extern void ClearFocusStackCommand(Environment *,UDFContext *,UDFValue *);
extern void FocusCommand(Environment *,UDFContext *,UDFValue *);
extern void HaltCommand(Environment *,UDFContext *,UDFValue *);
extern void RunCommand(Environment *,UDFContext *,UDFValue *);
extern void PPDefruleCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDefrulesCommand(Environment *,UDFContext *,UDFValue *);
extern void ListDefrulesCommand(Environment *,UDFContext *,UDFValue *);
extern void DefruleModuleFunction(Environment *,UDFContext *,UDFValue *);
extern void UndefruleCommand(Environment *,UDFContext *,UDFValue *);
extern void GetDefruleListFunction(Environment *,UDFContext *,UDFValue *);
extern void AgendaCommand(Environment *,UDFContext *,UDFValue *);
extern void SetSalienceEvaluationCommand(Environment *,UDFContext *,UDFValue *);
extern void GetSalienceEvaluationCommand(Environment *,UDFContext *,UDFValue *);
extern void RefreshAgendaCommand(Environment *,UDFContext *,UDFValue *);
extern void RefreshCommand(Environment *,UDFContext *,UDFValue *);
extern void ResetCommand(Environment *,UDFContext *,UDFValue *);
extern void ClearCommand(Environment *,UDFContext *,UDFValue *);
extern void SDCCommand(Environment *,UDFContext *,UDFValue *);
extern void GDCCommand(Environment *,UDFContext *,UDFValue *);
extern void CheckSyntaxFunction(Environment *,UDFContext *,UDFValue *);
extern void GetProfilePercentThresholdCommand(Environment *,UDFContext *,UDFValue *);
extern void SetProfilePercentThresholdCommand(Environment *,UDFContext *,UDFValue *);
extern void ProfileResetCommand(Environment *,UDFContext *,UDFValue *);
extern void ProfileInfoCommand(Environment *,UDFContext *,UDFValue *);
extern void ProfileCommand(Environment *,UDFContext *,UDFValue *);
extern void ConstructsToCCommand(Environment *,UDFContext *,UDFValue *);
extern void GetRegionCommand(Environment *,UDFContext *,UDFValue *);
extern void PrintRegionCommand(Environment *,UDFContext *,UDFValue *);
extern void TossCommand(Environment *,UDFContext *,UDFValue *);
extern void FetchCommand(Environment *,UDFContext *,UDFValue *);
extern void RoundFunction(Environment *,UDFContext *,UDFValue *);
extern void PowFunction(Environment *,UDFContext *,UDFValue *);
extern void GradDegFunction(Environment *,UDFContext *,UDFValue *);
extern void DegGradFunction(Environment *,UDFContext *,UDFValue *);
extern void RadDegFunction(Environment *,UDFContext *,UDFValue *);
extern void DegRadFunction(Environment *,UDFContext *,UDFValue *);
extern void PiFunction(Environment *,UDFContext *,UDFValue *);
extern void SqrtFunction(Environment *,UDFContext *,UDFValue *);
extern void Log10Function(Environment *,UDFContext *,UDFValue *);
extern void LogFunction(Environment *,UDFContext *,UDFValue *);
extern void ExpFunction(Environment *,UDFContext *,UDFValue *);
extern void ModFunction(Environment *,UDFContext *,UDFValue *);
extern void AcothFunction(Environment *,UDFContext *,UDFValue *);
extern void AcschFunction(Environment *,UDFContext *,UDFValue *);
extern void AsechFunction(Environment *,UDFContext *,UDFValue *);
extern void AtanhFunction(Environment *,UDFContext *,UDFValue *);
extern void AsinhFunction(Environment *,UDFContext *,UDFValue *);
extern void AcoshFunction(Environment *,UDFContext *,UDFValue *);
extern void CothFunction(Environment *,UDFContext *,UDFValue *);
extern void CschFunction(Environment *,UDFContext *,UDFValue *);
extern void SechFunction(Environment *,UDFContext *,UDFValue *);
extern void TanhFunction(Environment *,UDFContext *,UDFValue *);
extern void SinhFunction(Environment *,UDFContext *,UDFValue *);
extern void CoshFunction(Environment *,UDFContext *,UDFValue *);
extern void AcotFunction(Environment *,UDFContext *,UDFValue *);
extern void AcscFunction(Environment *,UDFContext *,UDFValue *);
extern void AsecFunction(Environment *,UDFContext *,UDFValue *);
extern void Atan2Function(Environment *,UDFContext *,UDFValue *);
extern void AtanFunction(Environment *,UDFContext *,UDFValue *);
extern void AsinFunction(Environment *,UDFContext *,UDFValue *);
extern void AcosFunction(Environment *,UDFContext *,UDFValue *);
extern void CotFunction(Environment *,UDFContext *,UDFValue *);
extern void CscFunction(Environment *,UDFContext *,UDFValue *);
extern void SecFunction(Environment *,UDFContext *,UDFValue *);
extern void TanFunction(Environment *,UDFContext *,UDFValue *);
extern void SinFunction(Environment *,UDFContext *,UDFValue *);
extern void CosFunction(Environment *,UDFContext *,UDFValue *);
extern void StrReplaceFunction(Environment *,UDFContext *,UDFValue *);
extern void StringToFieldFunction(Environment *,UDFContext *,UDFValue *);
extern void BuildFunction(Environment *,UDFContext *,UDFValue *);
extern void EvalFunction(Environment *,UDFContext *,UDFValue *);
extern void StrIndexFunction(Environment *,UDFContext *,UDFValue *);
extern void SubStringFunction(Environment *,UDFContext *,UDFValue *);
extern void LowcaseFunction(Environment *,UDFContext *,UDFValue *);
extern void UpcaseFunction(Environment *,UDFContext *,UDFValue *);
extern void StrCompareFunction(Environment *,UDFContext *,UDFValue *);
extern void StrLengthFunction(Environment *,UDFContext *,UDFValue *);
extern void SymCatFunction(Environment *,UDFContext *,UDFValue *);
extern void StrCatFunction(Environment *,UDFContext *,UDFValue *);
extern void GetMvPrognIndex(Environment *,UDFContext *,UDFValue *);
extern void GetMvPrognField(Environment *,UDFContext *,UDFValue *);
extern void ForeachFunction(Environment *,UDFContext *,UDFValue *);
extern void MultifieldPrognFunction(Environment *,UDFContext *,UDFValue *);
extern void SubsetpFunction(Environment *,UDFContext *,UDFValue *);
extern void MemberFunction(Environment *,UDFContext *,UDFValue *);
extern void NthFunction(Environment *,UDFContext *,UDFValue *);
extern void ImplodeFunction(Environment *,UDFContext *,UDFValue *);
extern void ExplodeFunction(Environment *,UDFContext *,UDFValue *);
extern void InsertFunction(Environment *,UDFContext *,UDFValue *);
extern void ReplaceFunction(Environment *,UDFContext *,UDFValue *);
extern void DeleteFunction(Environment *,UDFContext *,UDFValue *);
extern void ReplaceMemberFunction(Environment *,UDFContext *,UDFValue *);
extern void DeleteMemberFunction(Environment *,UDFContext *,UDFValue *);
extern void SubseqFunction(Environment *,UDFContext *,UDFValue *);
extern void RestFunction(Environment *,UDFContext *,UDFValue *);
extern void FirstFunction(Environment *,UDFContext *,UDFValue *);
extern void ListWatchItemsCommand(Environment *,UDFContext *,UDFValue *);
extern void GetWatchItemCommand(Environment *,UDFContext *,UDFValue *);
extern void UnwatchCommand(Environment *,UDFContext *,UDFValue *);
extern void WatchCommand(Environment *,UDFContext *,UDFValue *);
extern void SortFunction(Environment *,UDFContext *,UDFValue *);
extern void BloadCommand(Environment *,UDFContext *,UDFValue *);
extern void BsaveCommand(Environment *,UDFContext *,UDFValue *);
extern void LoadStarCommand(Environment *,UDFContext *,UDFValue *);
extern void LoadCommand(Environment *,UDFContext *,UDFValue *);
extern void SaveCommand(Environment *,UDFContext *,UDFValue *);
extern void DribbleOffCommand(Environment *,UDFContext *,UDFValue *);
extern void DribbleOnCommand(Environment *,UDFContext *,UDFValue *);
extern void BatchStarCommand(Environment *,UDFContext *,UDFValue *);
extern void BatchCommand(Environment *,UDFContext *,UDFValue *);
extern void MaxFunction(Environment *,UDFContext *,UDFValue *);
extern void MinFunction(Environment *,UDFContext *,UDFValue *);
extern void AbsFunction(Environment *,UDFContext *,UDFValue *);
extern void FloatFunction(Environment *,UDFContext *,UDFValue *);
extern void IntegerFunction(Environment *,UDFContext *,UDFValue *);
extern void DivFunction(Environment *,UDFContext *,UDFValue *);
extern void DivisionFunction(Environment *,UDFContext *,UDFValue *);
extern void SubtractionFunction(Environment *,UDFContext *,UDFValue *);
extern void MultiplicationFunction(Environment *,UDFContext *,UDFValue *);
extern void AdditionFunction(Environment *,UDFContext *,UDFValue *);
extern void ExternalAddresspFunction(Environment *,UDFContext *,UDFValue *);
extern void ExternalAddresspFunction(Environment *,UDFContext *,UDFValue *);
extern void MultifieldpFunction(Environment *,UDFContext *,UDFValue *);
extern void EvenpFunction(Environment *,UDFContext *,UDFValue *);
extern void OddpFunction(Environment *,UDFContext *,UDFValue *);
extern void FloatpFunction(Environment *,UDFContext *,UDFValue *);
extern void IntegerpFunction(Environment *,UDFContext *,UDFValue *);
extern void NumberpFunction(Environment *,UDFContext *,UDFValue *);
extern void LexemepFunction(Environment *,UDFContext *,UDFValue *);
extern void StringpFunction(Environment *,UDFContext *,UDFValue *);
extern void SymbolpFunction(Environment *,UDFContext *,UDFValue *);
extern void NumericNotEqualFunction(Environment *,UDFContext *,UDFValue *);
extern void NumericNotEqualFunction(Environment *,UDFContext *,UDFValue *);
extern void NumericEqualFunction(Environment *,UDFContext *,UDFValue *);
extern void GreaterThanFunction(Environment *,UDFContext *,UDFValue *);
extern void LessThanFunction(Environment *,UDFContext *,UDFValue *);
extern void GreaterThanOrEqualFunction(Environment *,UDFContext *,UDFValue *);
extern void LessThanOrEqualFunction(Environment *,UDFContext *,UDFValue *);
extern void NeqFunction(Environment *,UDFContext *,UDFValue *);
extern void EqFunction(Environment *,UDFContext *,UDFValue *);
extern void OrFunction(Environment *,UDFContext *,UDFValue *);
extern void AndFunction(Environment *,UDFContext *,UDFValue *);
extern void NotFunction(Environment *,UDFContext *,UDFValue *);
extern void ChdirFunction(Environment *,UDFContext *,UDFValue *);
extern void ReadNumberFunction(Environment *,UDFContext *,UDFValue *);
extern void SetLocaleFunction(Environment *,UDFContext *,UDFValue *);
extern void ReadlineFunction(Environment *,UDFContext *,UDFValue *);
extern void FormatFunction(Environment *,UDFContext *,UDFValue *);
extern void RenameFunction(Environment *,UDFContext *,UDFValue *);
extern void RemoveFunction(Environment *,UDFContext *,UDFValue *);
extern void PutCharFunction(Environment *,UDFContext *,UDFValue *);
extern void UngetCharFunction(Environment *,UDFContext *,UDFValue *);
extern void GetCharFunction(Environment *,UDFContext *,UDFValue *);
extern void SeekFunction(Environment *,UDFContext *,UDFValue *);
extern void TellFunction(Environment *,UDFContext *,UDFValue *);
extern void RewindFunction(Environment *,UDFContext *,UDFValue *);
extern void FlushFunction(Environment *,UDFContext *,UDFValue *);
extern void CloseFunction(Environment *,UDFContext *,UDFValue *);
extern void OpenFunction(Environment *,UDFContext *,UDFValue *);
extern void ReadFunction(Environment *,UDFContext *,UDFValue *);
extern void PrintlnFunction(Environment *,UDFContext *,UDFValue *);
extern void PrintFunction(Environment *,UDFContext *,UDFValue *);
extern void PrintoutFunction(Environment *,UDFContext *,UDFValue *);
extern void VoidFunction(Environment *,UDFContext *,UDFValue *);
extern void SetErrorFunction(Environment *,UDFContext *,UDFValue *);
extern void ClearErrorFunction(Environment *,UDFContext *,UDFValue *);
extern void GetErrorFunction(Environment *,UDFContext *,UDFValue *);
extern void TimerFunction(Environment *,UDFContext *,UDFValue *);
extern void CallFunction(Environment *,UDFContext *,UDFValue *);
extern void NewFunction(Environment *,UDFContext *,UDFValue *);
extern void FuncallFunction(Environment *,UDFContext *,UDFValue *);
extern void GetFunctionListFunction(Environment *,UDFContext *,UDFValue *);
extern void AproposCommand(Environment *,UDFContext *,UDFValue *);
extern void CreateFunction(Environment *,UDFContext *,UDFValue *);
extern void GetFunctionRestrictions(Environment *,UDFContext *,UDFValue *);
extern void GetSORCommand(Environment *,UDFContext *,UDFValue *);
extern void SetSORCommand(Environment *,UDFContext *,UDFValue *);
extern void CauseEvaluationError(Environment *,UDFContext *,UDFValue *);
extern void DummyExpandFuncMultifield(Environment *,UDFContext *,UDFValue *);
extern void ExpandFuncCall(Environment *,UDFContext *,UDFValue *);
extern void OperatingSystemFunction(Environment *,UDFContext *,UDFValue *);
extern void OptionsCommand(Environment *,UDFContext *,UDFValue *);
extern void MemRequestsCommand(Environment *,UDFContext *,UDFValue *);
extern void MemUsedCommand(Environment *,UDFContext *,UDFValue *);
extern void ReleaseMemCommand(Environment *,UDFContext *,UDFValue *);
extern void ConserveMemCommand(Environment *,UDFContext *,UDFValue *);
extern void SeedFunction(Environment *,UDFContext *,UDFValue *);
extern void RandomFunction(Environment *,UDFContext *,UDFValue *);
extern void GMTimeFunction(Environment *,UDFContext *,UDFValue *);
extern void LocalTimeFunction(Environment *,UDFContext *,UDFValue *);
extern void TimeFunction(Environment *,UDFContext *,UDFValue *);
extern void LengthFunction(Environment *,UDFContext *,UDFValue *);
extern void SystemCommand(Environment *,UDFContext *,UDFValue *);
extern void SetgenFunction(Environment *,UDFContext *,UDFValue *);
extern void GensymStarFunction(Environment *,UDFContext *,UDFValue *);
extern void GensymFunction(Environment *,UDFContext *,UDFValue *);
extern void ExitCommand(Environment *,UDFContext *,UDFValue *);
extern void SwitchFunction(Environment *,UDFContext *,UDFValue *);
extern void BreakFunction(Environment *,UDFContext *,UDFValue *);
extern void ReturnFunction(Environment *,UDFContext *,UDFValue *);
extern void PrognFunction(Environment *,UDFContext *,UDFValue *);
extern void BindFunction(Environment *,UDFContext *,UDFValue *);
extern void GetLoopCount(Environment *,UDFContext *,UDFValue *);
extern void LoopForCountFunction(Environment *,UDFContext *,UDFValue *);
extern void WhileFunction(Environment *,UDFContext *,UDFValue *);
extern void IfFunction(Environment *,UDFContext *,UDFValue *);

#endif

/****************************/
/* EXTERN ARRAY DEFINITIONS */
/****************************/

extern CLIPSLexeme *sht1[];
extern CLIPSFloat *fht1[];
extern CLIPSInteger *iht1[];
extern struct clipsBitMap *bmht1[];
extern CLIPSLexeme S1_1[];
extern CLIPSInteger I1_1[];
extern struct clipsBitMap B1_1[];
extern unsigned long L1_1[];
extern struct functionDefinition P1_1[];
extern struct expr E1_1[];
#include "moduldef.h"
extern struct defmoduleItemHeader *T_1_1[];
extern Defmodule U_1_1[];
#include "classcom.h"
#include "classini.h"
extern Defclass * O_1_1[];
extern unsigned P_1;
extern Defclass * N_1_1[];
extern SLOT_NAME * M_1_1[];
extern SLOT_NAME L_1_1[];
extern DEFCLASS_MODULE D_1_1[];
extern Defclass E_1_1[];
extern Defclass * F_1_1[];
extern DefmessageHandler J_1_1[];
extern unsigned K_1_1[];
extern SlotDescriptor G_1_1[];
extern SlotDescriptor * H_1_1[];
extern unsigned I_1_1[];
#include "defins.h"
extern DEFINSTANCES_MODULE B_1_1[];
#include "tmpltdef.h"
extern struct deftemplateModule Y1_1[];
#include "factbld.h"
#include "globldef.h"
extern struct defglobalModule V1_1[];
#include "dffnxfun.h"
extern DeffunctionModuleData T1_1[];
#include "genrcfun.h"
extern DEFGENERIC_MODULE M1_1[];
#include "dffctdef.h"
extern struct deffactsModule J1_1[];
#include "ruledef.h"
extern struct defruleModule A1_1[];
   Environment *InitCImage_1(void);
   void FixupCImage_1(Environment *);
