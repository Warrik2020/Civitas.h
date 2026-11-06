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
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        float taxBase() const { return ReadField<float>("taxBase"); }
        void SetTaxBase(float value) const { WriteField<float>("taxBase", value); }
        float taxYield() const { return ReadField<float>("taxYield"); }
        void SetTaxYield(float value) const { WriteField<float>("taxYield", value); }
        float taxShare() const { return ReadField<float>("taxShare"); }
        void SetTaxShare(float value) const { WriteField<float>("taxShare", value); }
        float towns() const { return ReadField<float>("towns"); }
        void SetTowns(float value) const { WriteField<float>("towns", value); }
        float people() const { return ReadField<float>("people"); }
        void SetPeople(float value) const { WriteField<float>("people", value); }
        float heldTiles() const { return ReadField<float>("heldTiles"); }
        void SetHeldTiles(float value) const { WriteField<float>("heldTiles", value); }
        float adminTiles() const { return ReadField<float>("adminTiles"); }
        void SetAdminTiles(float value) const { WriteField<float>("adminTiles", value); }
        float integration() const { return ReadField<float>("integration"); }
        void SetIntegration(float value) const { WriteField<float>("integration", value); }
        float promotionAxes() const { return ReadField<float>("promotionAxes"); }
        void SetPromotionAxes(float value) const { WriteField<float>("promotionAxes", value); }
        float unify() const { return ReadField<float>("unify"); }
        void SetUnify(float value) const { WriteField<float>("unify", value); }
        float curtail() const { return ReadField<float>("curtail"); }
        void SetCurtail(float value) const { WriteField<float>("curtail", value); }
        float upkeepPower() const { return ReadField<float>("upkeepPower"); }
        void SetUpkeepPower(float value) const { WriteField<float>("upkeepPower", value); }
        float factoryKey() const { return ReadField<float>("factoryKey"); }
        void SetFactoryKey(float value) const { WriteField<float>("factoryKey", value); }
        float civWorks() const { return ReadField<float>("civWorks"); }
        void SetCivWorks(float value) const { WriteField<float>("civWorks", value); }
    };
}
