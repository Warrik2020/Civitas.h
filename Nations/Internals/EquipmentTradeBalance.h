#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EquipmentTradeBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EquipmentTradeBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EquipmentTradeBalance") {}
    public:
        float UnitValueMul() const { return ReadStaticField<float>("UnitValueMul"); }
        float UnitValueFloor() const { return ReadStaticField<float>("UnitValueFloor"); }
        float WarNeed() const { return ReadStaticField<float>("WarNeed"); }
        float ShortageWeight() const { return ReadStaticField<float>("ShortageWeight"); }
        float CannotMakeNeed() const { return ReadStaticField<float>("CannotMakeNeed"); }
        float OverReserveValue() const { return ReadStaticField<float>("OverReserveValue"); }
        float WarHoard() const { return ReadStaticField<float>("WarHoard"); }
        float StockScarcityWeight() const { return ReadStaticField<float>("StockScarcityWeight"); }
        float StockScarcityFloor() const { return ReadStaticField<float>("StockScarcityFloor"); }
        float InServiceHold() const { return ReadStaticField<float>("InServiceHold"); }
        float PatternScoreOffset() const { return ReadStaticField<float>("PatternScoreOffset"); }
        float PatternWorthMin() const { return ReadStaticField<float>("PatternWorthMin"); }
        float PatternWorthMax() const { return ReadStaticField<float>("PatternWorthMax"); }
        float ContractCertainty() const { return ReadStaticField<float>("ContractCertainty"); }
        float ContractStrainWeight() const { return ReadStaticField<float>("ContractStrainWeight"); }
        float ContractMaxOverProduction() const { return ReadStaticField<float>("ContractMaxOverProduction"); }
        float ContractPaymentMaxIncomeShare() const { return ReadStaticField<float>("ContractPaymentMaxIncomeShare"); }
        int ContractMinTicks() const { return ReadStaticField<int>("ContractMinTicks"); }
        float ContractMinPerTick() const { return ReadStaticField<float>("ContractMinPerTick"); }
        float ContractShortShare() const { return ReadStaticField<float>("ContractShortShare"); }
        int ContractDefaultTicks() const { return ReadStaticField<int>("ContractDefaultTicks"); }
        float GrudgeCancelled() const { return ReadStaticField<float>("GrudgeCancelled"); }
        float GrudgeDefaulted() const { return ReadStaticField<float>("GrudgeDefaulted"); }
        float GoodwillPerInterval() const { return ReadStaticField<float>("GoodwillPerInterval"); }
        int GoodwillIntervalTicks() const { return ReadStaticField<int>("GoodwillIntervalTicks"); }
        void* TermYears() const { return ReadStaticField<void*>("TermYears"); }
        float MinShipment() const { return ReadStaticField<float>("MinShipment"); }
        float AiLowFill() const { return ReadStaticField<float>("AiLowFill"); }
        float AiBuyToFill() const { return ReadStaticField<float>("AiBuyToFill"); }
        float AiSurplusFill() const { return ReadStaticField<float>("AiSurplusFill"); }
        float AiKeepFill() const { return ReadStaticField<float>("AiKeepFill"); }
        float AiContractProductionShare() const { return ReadStaticField<float>("AiContractProductionShare"); }
        float AiContractYears() const { return ReadStaticField<float>("AiContractYears"); }
        float AiContractMinPerTick() const { return ReadStaticField<float>("AiContractMinPerTick"); }
    };
}
