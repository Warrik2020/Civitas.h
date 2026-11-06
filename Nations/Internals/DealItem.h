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
        void kind(int value) const { WriteField<int>("kind", value); }
        float gold() const { return ReadField<float>("gold"); }
        void gold(float value) const { WriteField<float>("gold", value); }
        int factoryCount() const { return ReadField<int>("factoryCount"); }
        void factoryCount(int value) const { WriteField<int>("factoryCount", value); }
        void* landTiles() const { return ReadField<void*>("landTiles"); }
        void landTiles(void* value) const { WriteField<void*>("landTiles", value); }
        bool includesCapital() const { return ReadField<bool>("includesCapital"); }
        void includesCapital(bool value) const { WriteField<bool>("includesCapital", value); }
        int landStateId() const { return ReadField<int>("landStateId"); }
        void landStateId(int value) const { WriteField<int>("landStateId", value); }
        int thirdNationId() const { return ReadField<int>("thirdNationId"); }
        void thirdNationId(int value) const { WriteField<int>("thirdNationId", value); }
        int divisionCount() const { return ReadField<int>("divisionCount"); }
        void divisionCount(int value) const { WriteField<int>("divisionCount", value); }
        int divisionType() const { return ReadField<int>("divisionType"); }
        void divisionType(int value) const { WriteField<int>("divisionType", value); }
        bool anyDivisionType() const { return ReadField<bool>("anyDivisionType"); }
        void anyDivisionType(bool value) const { WriteField<bool>("anyDivisionType", value); }
        int pool() const { return ReadField<int>("pool"); }
        void pool(int value) const { WriteField<int>("pool", value); }
        float equipAmount() const { return ReadField<float>("equipAmount"); }
        void equipAmount(float value) const { WriteField<float>("equipAmount", value); }
        int equipDesignId() const { return ReadField<int>("equipDesignId"); }
        void equipDesignId(int value) const { WriteField<int>("equipDesignId", value); }
        int resourceKind() const { return ReadField<int>("resourceKind"); }
        void resourceKind(int value) const { WriteField<int>("resourceKind", value); }
        int resourceUnits() const { return ReadField<int>("resourceUnits"); }
        void resourceUnits(int value) const { WriteField<int>("resourceUnits", value); }
        float contractPerTick() const { return ReadField<float>("contractPerTick"); }
        void contractPerTick(float value) const { WriteField<float>("contractPerTick", value); }
        int contractTicks() const { return ReadField<int>("contractTicks"); }
        void contractTicks(int value) const { WriteField<int>("contractTicks", value); }
        float contractPrice() const { return ReadField<float>("contractPrice"); }
        void contractPrice(float value) const { WriteField<float>("contractPrice", value); }
    };
}
