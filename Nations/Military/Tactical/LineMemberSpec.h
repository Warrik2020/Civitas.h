#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineMemberSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineMemberSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineMemberSpec") {}
    public:
        int key() const { return ReadField<int>("key"); }
        void SetKey(int value) const { WriteField<int>("key", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int age() const { return ReadField<int>("age"); }
        void SetAge(int value) const { WriteField<int>("age", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        void* colour() const { return ReadField<void*>("colour"); }
        void SetColour(void* value) const { WriteField<void*>("colour", value); }
        float men() const { return ReadField<float>("men"); }
        void SetMen(float value) const { WriteField<float>("men", value); }
        float menCap() const { return ReadField<float>("menCap"); }
        void SetMenCap(float value) const { WriteField<float>("menCap", value); }
        float org01() const { return ReadField<float>("org01"); }
        void SetOrg01(float value) const { WriteField<float>("org01", value); }
        float atkPerMan() const { return ReadField<float>("atkPerMan"); }
        void SetAtkPerMan(float value) const { WriteField<float>("atkPerMan", value); }
        float defPerMan() const { return ReadField<float>("defPerMan"); }
        void SetDefPerMan(float value) const { WriteField<float>("defPerMan", value); }
        float incoming() const { return ReadField<float>("incoming"); }
        void SetIncoming(float value) const { WriteField<float>("incoming", value); }
        float guns() const { return ReadField<float>("guns"); }
        void SetGuns(float value) const { WriteField<float>("guns", value); }
        void* front() const { return ReadField<void*>("front"); }
        void SetFront(void* value) const { WriteField<void*>("front", value); }
        float frontHalfWidth() const { return ReadField<float>("frontHalfWidth"); }
        void SetFrontHalfWidth(float value) const { WriteField<float>("frontHalfWidth", value); }
        float contactSeconds() const { return ReadField<float>("contactSeconds"); }
        void SetContactSeconds(float value) const { WriteField<float>("contactSeconds", value); }
        bool controllable() const { return ReadField<bool>("controllable"); }
        void SetControllable(bool value) const { WriteField<bool>("controllable", value); }
        bool auto_() const { return ReadField<bool>("auto"); }
        void SetAuto(bool value) const { WriteField<bool>("auto", value); }
        bool pressing() const { return ReadField<bool>("pressing"); }
        void SetPressing(bool value) const { WriteField<bool>("pressing", value); }
        bool holding() const { return ReadField<bool>("holding"); }
        void SetHolding(bool value) const { WriteField<bool>("holding", value); }
    };
}
