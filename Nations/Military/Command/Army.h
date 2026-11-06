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
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void SetOrdinal(int value) const { WriteField<int>("ordinal", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int colorSlot() const { return ReadField<int>("colorSlot"); }
        void SetColorSlot(int value) const { WriteField<int>("colorSlot", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        int generalId() const { return ReadField<int>("generalId"); }
        void SetGeneralId(int value) const { WriteField<int>("generalId", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        void* divisionIds() const { return ReadField<void*>("divisionIds"); }
        void* plan() const { return ReadField<void*>("plan"); }
        void SetPlan(void* value) const { WriteField<void*>("plan", value); }
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
        int rosterVersion() const { return ReadField<int>("rosterVersion"); }
        void SetRosterVersion(int value) const { WriteField<int>("rosterVersion", value); }
    };
}
