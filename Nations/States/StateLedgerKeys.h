#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateLedgerKeys : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateLedgerKeys(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateLedgerKeys") {}
    public:
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        float taxBase() const { return ReadField<float>("taxBase"); }
        void taxBase(float value) const { WriteField<float>("taxBase", value); }
        float taxYield() const { return ReadField<float>("taxYield"); }
        void taxYield(float value) const { WriteField<float>("taxYield", value); }
        float taxShare() const { return ReadField<float>("taxShare"); }
        void taxShare(float value) const { WriteField<float>("taxShare", value); }
        float towns() const { return ReadField<float>("towns"); }
        void towns(float value) const { WriteField<float>("towns", value); }
        float people() const { return ReadField<float>("people"); }
        void people(float value) const { WriteField<float>("people", value); }
        float heldTiles() const { return ReadField<float>("heldTiles"); }
        void heldTiles(float value) const { WriteField<float>("heldTiles", value); }
        float adminTiles() const { return ReadField<float>("adminTiles"); }
        void adminTiles(float value) const { WriteField<float>("adminTiles", value); }
        float integration() const { return ReadField<float>("integration"); }
        void integration(float value) const { WriteField<float>("integration", value); }
        float promotionAxes() const { return ReadField<float>("promotionAxes"); }
        void promotionAxes(float value) const { WriteField<float>("promotionAxes", value); }
        float unify() const { return ReadField<float>("unify"); }
        void unify(float value) const { WriteField<float>("unify", value); }
        float curtail() const { return ReadField<float>("curtail"); }
        void curtail(float value) const { WriteField<float>("curtail", value); }
        float upkeepPower() const { return ReadField<float>("upkeepPower"); }
        void upkeepPower(float value) const { WriteField<float>("upkeepPower", value); }
        float factoryKey() const { return ReadField<float>("factoryKey"); }
        void factoryKey(float value) const { WriteField<float>("factoryKey", value); }
        float civWorks() const { return ReadField<float>("civWorks"); }
        void civWorks(float value) const { WriteField<float>("civWorks", value); }
    };
}
