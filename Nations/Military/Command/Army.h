#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class Army : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Army(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "Army") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void ordinal(int value) const { WriteField<int>("ordinal", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int colorSlot() const { return ReadField<int>("colorSlot"); }
        void colorSlot(int value) const { WriteField<int>("colorSlot", value); }
        void* color() const { return ReadField<void*>("color"); }
        void color(void* value) const { WriteField<void*>("color", value); }
        int generalId() const { return ReadField<int>("generalId"); }
        void generalId(int value) const { WriteField<int>("generalId", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void groupId(int value) const { WriteField<int>("groupId", value); }
        void* divisionIds() const { return ReadField<void*>("divisionIds"); }
        void* plan() const { return ReadField<void*>("plan"); }
        void plan(void* value) const { WriteField<void*>("plan", value); }
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
        int rosterVersion() const { return ReadField<int>("rosterVersion"); }
        void rosterVersion(int value) const { WriteField<int>("rosterVersion", value); }
    };
}
