#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerArmyV2 : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerArmyV2(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerArmyV2") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void SetOrdinal(int value) const { WriteField<int>("ordinal", value); }
        int colorSlot() const { return ReadField<int>("colorSlot"); }
        void SetColorSlot(int value) const { WriteField<int>("colorSlot", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int generalId() const { return ReadField<int>("generalId"); }
        void SetGeneralId(int value) const { WriteField<int>("generalId", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void SetDivisions(void* value) const { WriteField<void*>("divisions", value); }
        int aggression() const { return ReadField<int>("aggression"); }
        void SetAggression(int value) const { WriteField<int>("aggression", value); }
        int state() const { return ReadField<int>("state"); }
        void SetState(int value) const { WriteField<int>("state", value); }
        float planning() const { return ReadField<float>("planning"); }
        void SetPlanning(float value) const { WriteField<float>("planning", value); }
        bool manual() const { return ReadField<bool>("manual"); }
        void SetManual(bool value) const { WriteField<bool>("manual", value); }
        int aiTag() const { return ReadField<int>("aiTag"); }
        void SetAiTag(int value) const { WriteField<int>("aiTag", value); }
        void* plan() const { return ReadField<void*>("plan"); }
        void SetPlan(void* value) const { WriteField<void*>("plan", value); }
    };
}
