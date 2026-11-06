#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class DealItem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DealItem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "DealItem") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        float gold() const { return ReadField<float>("gold"); }
        void SetGold(float value) const { WriteField<float>("gold", value); }
        int factoryCount() const { return ReadField<int>("factoryCount"); }
        void SetFactoryCount(int value) const { WriteField<int>("factoryCount", value); }
        void* landTiles() const { return ReadField<void*>("landTiles"); }
        void SetLandTiles(void* value) const { WriteField<void*>("landTiles", value); }
        bool includesCapital() const { return ReadField<bool>("includesCapital"); }
        void SetIncludesCapital(bool value) const { WriteField<bool>("includesCapital", value); }
        int landStateId() const { return ReadField<int>("landStateId"); }
        void SetLandStateId(int value) const { WriteField<int>("landStateId", value); }
        int thirdNationId() const { return ReadField<int>("thirdNationId"); }
        void SetThirdNationId(int value) const { WriteField<int>("thirdNationId", value); }
        int divisionCount() const { return ReadField<int>("divisionCount"); }
        void SetDivisionCount(int value) const { WriteField<int>("divisionCount", value); }
        int divisionType() const { return ReadField<int>("divisionType"); }
        void SetDivisionType(int value) const { WriteField<int>("divisionType", value); }
        bool anyDivisionType() const { return ReadField<bool>("anyDivisionType"); }
        void SetAnyDivisionType(bool value) const { WriteField<bool>("anyDivisionType", value); }
        int pool() const { return ReadField<int>("pool"); }
        void SetPool(int value) const { WriteField<int>("pool", value); }
        float equipAmount() const { return ReadField<float>("equipAmount"); }
        void SetEquipAmount(float value) const { WriteField<float>("equipAmount", value); }
        int equipDesignId() const { return ReadField<int>("equipDesignId"); }
        void SetEquipDesignId(int value) const { WriteField<int>("equipDesignId", value); }
        int resourceKind() const { return ReadField<int>("resourceKind"); }
        void SetResourceKind(int value) const { WriteField<int>("resourceKind", value); }
        int resourceUnits() const { return ReadField<int>("resourceUnits"); }
        void SetResourceUnits(int value) const { WriteField<int>("resourceUnits", value); }
        float contractPerTick() const { return ReadField<float>("contractPerTick"); }
        void SetContractPerTick(float value) const { WriteField<float>("contractPerTick", value); }
        int contractTicks() const { return ReadField<int>("contractTicks"); }
        void SetContractTicks(int value) const { WriteField<int>("contractTicks", value); }
        float contractPrice() const { return ReadField<float>("contractPrice"); }
        void SetContractPrice(float value) const { WriteField<float>("contractPrice", value); }
    };
}
