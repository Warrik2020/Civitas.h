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
        void Publish(void* cfg) const { void* args[] = { cfg }; CallStatic("Publish", args, 1); }
        void Accrue(void* it, float amount) const { void* args[] = { it, &amount }; CallStatic("Accrue", args, 2); }
        void Payday(void* it) const { void* args[] = { it }; CallStatic("Payday", args, 1); }
        void Tick(void* it, void* cfg, int span = 1) const { void* args[] = { it, cfg, &span }; CallStatic("Tick", args, 3); }
        float GrossIncome(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("GrossIncome", args, 2); }
        float TaxTake(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("TaxTake", args, 2); }
        float DevelopmentTake(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("DevelopmentTake", args, 2); }
        float TradeTake(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("TradeTake", args, 2); }
        float SizeBase(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("SizeBase", args, 2); }
        float IncomeCurve(float b) const { void* args[] = { &b }; return CallStaticValue<float>("IncomeCurve", args, 1); }
        float CurveScale(float b) const { void* args[] = { &b }; return CallStaticValue<float>("CurveScale", args, 1); }
        float IncomeScale(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("IncomeScale", args, 2); }
        float BillScale(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("BillScale", args, 2); }
        float CorruptionLoss(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("CorruptionLoss", args, 2); }
        float Spending(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("Spending", args, 2); }
        float Spending(void* it, void* cfg, float gross) const { void* args[] = { it, cfg, &gross }; return CallStaticValue<float>("Spending", args, 3); }
        float AdministrationCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("AdministrationCost", args, 2); }
        float MilitaryCost(void* it, void* cfg, float gross) const { void* args[] = { it, cfg, &gross }; return CallStaticValue<float>("MilitaryCost", args, 3); }
        float FleetUpkeep(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("FleetUpkeep", args, 2); }
        float ProgrammeCost(void* it, void* cfg, float gross) const { void* args[] = { it, cfg, &gross }; return CallStaticValue<float>("ProgrammeCost", args, 3); }
        float ResearchCost(void* it, void* cfg, float gross) const { void* args[] = { it, cfg, &gross }; return CallStaticValue<float>("ResearchCost", args, 3); }
        float ResearchCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("ResearchCost", args, 2); }
        float BuildingUpkeep(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("BuildingUpkeep", args, 2); }
        float FactoryUpkeep(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("FactoryUpkeep", args, 2); }
        float AdminNeed(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("AdminNeed", args, 2); }
        float AdminCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("AdminCost", args, 2); }
        float AdminNeedShare(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("AdminNeedShare", args, 2); }
        float AdminFundingRatio(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("AdminFundingRatio", args, 2); }
        float StartingAdminFunding(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("StartingAdminFunding", args, 2); }
        float MaxTaxRate(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("MaxTaxRate", args, 2); }
        float IntegrationCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("IntegrationCost", args, 2); }
        float AssimilationBill(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("AssimilationBill", args, 2); }
        float AssimilationBill(void* it, void* cfg, int axisMask) const { void* args[] = { it, cfg, &axisMask }; return CallStaticValue<float>("AssimilationBill", args, 3); }
        float AssimilationCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("AssimilationCost", args, 2); }
        float BorderGuardBill(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("BorderGuardBill", args, 2); }
        float BorderGuardBill(void* it, void* cfg, int axisMask) const { void* args[] = { it, cfg, &axisMask }; return CallStaticValue<float>("BorderGuardBill", args, 3); }
        float BorderGuardCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("BorderGuardCost", args, 2); }
        float PromotionCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("PromotionCost", args, 2); }
        float PromotionBill(void* it, void* cfg, int frontTilesOnCount) const { void* args[] = { it, cfg, &frontTilesOnCount }; return CallStaticValue<float>("PromotionBill", args, 3); }
        float ForgeCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("ForgeCost", args, 2); }
        float ExpulsionCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("ExpulsionCost", args, 2); }
        float ExpulsionBill(void* it, void* cfg, int axis) const { void* args[] = { it, cfg, &axis }; return CallStaticValue<float>("ExpulsionBill", args, 3); }
        float SocialCost(void* it, void* cfg, float gross) const { void* args[] = { it, cfg, &gross }; return CallStaticValue<float>("SocialCost", args, 3); }
        float SocialCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("SocialCost", args, 2); }
        float ConstructionCost(void* it, void* cfg, float gross) const { void* args[] = { it, cfg, &gross }; return CallStaticValue<float>("ConstructionCost", args, 3); }
        float ConstructionCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("ConstructionCost", args, 2); }
        void AccrueConstruction(void* it, void* cfg, float gross, int span = 1) const { void* args[] = { it, cfg, &gross, &span }; CallStatic("AccrueConstruction", args, 4); }
        float FundCap(float flatPerTick, float gross, void* cfg, float topPrice = 0f) const { void* args[] = { &flatPerTick, &gross, cfg, &topPrice }; return CallStaticValue<float>("FundCap", args, 4); }
        float BudgetCost(float level, float flatPerTick, float gross, void* cfg) const { void* args[] = { &level, &flatPerTick, &gross, cfg }; return CallStaticValue<float>("BudgetCost", args, 4); }
        float ArmyUpkeep(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("ArmyUpkeep", args, 2); }
        float ArrearsFraction(void* it, void* cfg, float gross) const { void* args[] = { it, cfg, &gross }; return CallStaticValue<float>("ArrearsFraction", args, 3); }
        float PerDivisionUpkeep(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("PerDivisionUpkeep", args, 2); }
        float LongWarMul(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("LongWarMul", args, 2); }
        float UpkeepScaleFactor(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("UpkeepScaleFactor", args, 2); }
        float ProjectedNet(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("ProjectedNet", args, 2); }
        bool MonthlyPayday() const { return ReadStaticField<bool>("MonthlyPayday"); }
        void SetMonthlyPayday(bool value) const { WriteStaticField<bool>("MonthlyPayday", value); }
        float IncomeMul() const { return ReadStaticField<float>("IncomeMul"); }
        float IncomeCurveKnee() const { return ReadStaticField<float>("IncomeCurveKnee"); }
        float IncomeCurveExponent() const { return ReadStaticField<float>("IncomeCurveExponent"); }
        float AdminTileBillMul() const { return ReadStaticField<float>("AdminTileBillMul"); }
        float AdminFundingMax() const { return ReadStaticField<float>("AdminFundingMax"); }
    };
}
