#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class TreasurySystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TreasurySystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "TreasurySystem") {}
    public:
        void Publish(void* cfg) const { void* __callArgs[] = { cfg }; CallStatic("Publish", __callArgs, 1); }
        void Accrue(void* it, float amount) const { void* __callArgs[] = { it, &amount }; CallStatic("Accrue", __callArgs, 2); }
        void Payday(void* it) const { void* __callArgs[] = { it }; CallStatic("Payday", __callArgs, 1); }
        void Tick(void* it, void* cfg, int span = 1) const { void* __callArgs[] = { it, cfg, &span }; CallStatic("Tick", __callArgs, 3); }
        float GrossIncome(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("GrossIncome", __callArgs, 2); }
        float TaxTake(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("TaxTake", __callArgs, 2); }
        float DevelopmentTake(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("DevelopmentTake", __callArgs, 2); }
        float TradeTake(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("TradeTake", __callArgs, 2); }
        float SizeBase(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("SizeBase", __callArgs, 2); }
        float IncomeCurve(float b) const { void* __callArgs[] = { &b }; return CallStaticValue<float>("IncomeCurve", __callArgs, 1); }
        float CurveScale(float b) const { void* __callArgs[] = { &b }; return CallStaticValue<float>("CurveScale", __callArgs, 1); }
        float IncomeScale(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("IncomeScale", __callArgs, 2); }
        float BillScale(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("BillScale", __callArgs, 2); }
        float CorruptionLoss(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("CorruptionLoss", __callArgs, 2); }
        float Spending(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("Spending", __callArgs, 2); }
        float Spending(void* it, void* cfg, float gross) const { void* __callArgs[] = { it, cfg, &gross }; return CallStaticValue<float>("Spending", __callArgs, 3); }
        float AdministrationCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("AdministrationCost", __callArgs, 2); }
        float MilitaryCost(void* it, void* cfg, float gross) const { void* __callArgs[] = { it, cfg, &gross }; return CallStaticValue<float>("MilitaryCost", __callArgs, 3); }
        float FleetUpkeep(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("FleetUpkeep", __callArgs, 2); }
        float ProgrammeCost(void* it, void* cfg, float gross) const { void* __callArgs[] = { it, cfg, &gross }; return CallStaticValue<float>("ProgrammeCost", __callArgs, 3); }
        float ResearchCost(void* it, void* cfg, float gross) const { void* __callArgs[] = { it, cfg, &gross }; return CallStaticValue<float>("ResearchCost", __callArgs, 3); }
        float ResearchCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("ResearchCost", __callArgs, 2); }
        float BuildingUpkeep(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("BuildingUpkeep", __callArgs, 2); }
        float FactoryUpkeep(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("FactoryUpkeep", __callArgs, 2); }
        float AdminNeed(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("AdminNeed", __callArgs, 2); }
        float AdminCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("AdminCost", __callArgs, 2); }
        float AdminNeedShare(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("AdminNeedShare", __callArgs, 2); }
        float AdminFundingRatio(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("AdminFundingRatio", __callArgs, 2); }
        float StartingAdminFunding(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("StartingAdminFunding", __callArgs, 2); }
        float MaxTaxRate(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("MaxTaxRate", __callArgs, 2); }
        float IntegrationCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("IntegrationCost", __callArgs, 2); }
        float AssimilationBill(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("AssimilationBill", __callArgs, 2); }
        float AssimilationBill(void* it, void* cfg, int axisMask) const { void* __callArgs[] = { it, cfg, &axisMask }; return CallStaticValue<float>("AssimilationBill", __callArgs, 3); }
        float AssimilationCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("AssimilationCost", __callArgs, 2); }
        float BorderGuardBill(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("BorderGuardBill", __callArgs, 2); }
        float BorderGuardBill(void* it, void* cfg, int axisMask) const { void* __callArgs[] = { it, cfg, &axisMask }; return CallStaticValue<float>("BorderGuardBill", __callArgs, 3); }
        float BorderGuardCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("BorderGuardCost", __callArgs, 2); }
        float PromotionCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("PromotionCost", __callArgs, 2); }
        float PromotionBill(void* it, void* cfg, int frontTilesOnCount) const { void* __callArgs[] = { it, cfg, &frontTilesOnCount }; return CallStaticValue<float>("PromotionBill", __callArgs, 3); }
        float ForgeCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("ForgeCost", __callArgs, 2); }
        float ExpulsionCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("ExpulsionCost", __callArgs, 2); }
        float ExpulsionBill(void* it, void* cfg, int axis) const { void* __callArgs[] = { it, cfg, &axis }; return CallStaticValue<float>("ExpulsionBill", __callArgs, 3); }
        float SocialCost(void* it, void* cfg, float gross) const { void* __callArgs[] = { it, cfg, &gross }; return CallStaticValue<float>("SocialCost", __callArgs, 3); }
        float SocialCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("SocialCost", __callArgs, 2); }
        float ConstructionCost(void* it, void* cfg, float gross) const { void* __callArgs[] = { it, cfg, &gross }; return CallStaticValue<float>("ConstructionCost", __callArgs, 3); }
        float ConstructionCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("ConstructionCost", __callArgs, 2); }
        void AccrueConstruction(void* it, void* cfg, float gross, int span = 1) const { void* __callArgs[] = { it, cfg, &gross, &span }; CallStatic("AccrueConstruction", __callArgs, 4); }
        float FundCap(float flatPerTick, float gross, void* cfg, float topPrice = 0.0f) const { void* __callArgs[] = { &flatPerTick, &gross, cfg, &topPrice }; return CallStaticValue<float>("FundCap", __callArgs, 4); }
        float BudgetCost(float level, float flatPerTick, float gross, void* cfg) const { void* __callArgs[] = { &level, &flatPerTick, &gross, cfg }; return CallStaticValue<float>("BudgetCost", __callArgs, 4); }
        float ArmyUpkeep(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("ArmyUpkeep", __callArgs, 2); }
        float ArrearsFraction(void* it, void* cfg, float gross) const { void* __callArgs[] = { it, cfg, &gross }; return CallStaticValue<float>("ArrearsFraction", __callArgs, 3); }
        float PerDivisionUpkeep(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("PerDivisionUpkeep", __callArgs, 2); }
        float LongWarMul(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("LongWarMul", __callArgs, 2); }
        float UpkeepScaleFactor(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("UpkeepScaleFactor", __callArgs, 2); }
        float ProjectedNet(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("ProjectedNet", __callArgs, 2); }
        bool MonthlyPayday() const { return ReadStaticField<bool>("MonthlyPayday"); }
        void MonthlyPayday(bool value) const { WriteStaticField<bool>("MonthlyPayday", value); }
        float IncomeMul() const { return ReadStaticField<float>("IncomeMul"); }
        float IncomeCurveKnee() const { return ReadStaticField<float>("IncomeCurveKnee"); }
        float IncomeCurveExponent() const { return ReadStaticField<float>("IncomeCurveExponent"); }
        float AdminTileBillMul() const { return ReadStaticField<float>("AdminTileBillMul"); }
        float AdminFundingMax() const { return ReadStaticField<float>("AdminFundingMax"); }
    };
}
