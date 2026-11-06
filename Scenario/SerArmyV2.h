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
        void id(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void ordinal(int value) const { WriteField<int>("ordinal", value); }
        int colorSlot() const { return ReadField<int>("colorSlot"); }
        void colorSlot(int value) const { WriteField<int>("colorSlot", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int generalId() const { return ReadField<int>("generalId"); }
        void generalId(int value) const { WriteField<int>("generalId", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void divisions(void* value) const { WriteField<void*>("divisions", value); }
        int aggression() const { return ReadField<int>("aggression"); }
        void aggression(int value) const { WriteField<int>("aggression", value); }
        int state() const { return ReadField<int>("state"); }
        void state(int value) const { WriteField<int>("state", value); }
        float planning() const { return ReadField<float>("planning"); }
        void planning(float value) const { WriteField<float>("planning", value); }
        bool manual() const { return ReadField<bool>("manual"); }
        void manual(bool value) const { WriteField<bool>("manual", value); }
        int aiTag() const { return ReadField<int>("aiTag"); }
        void aiTag(int value) const { WriteField<int>("aiTag", value); }
        void* plan() const { return ReadField<void*>("plan"); }
        void plan(void* value) const { WriteField<void*>("plan", value); }
    };
}
