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
        void key(int value) const { WriteField<int>("key", value); }
        int side() const { return ReadField<int>("side"); }
        void side(int value) const { WriteField<int>("side", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int age() const { return ReadField<int>("age"); }
        void age(int value) const { WriteField<int>("age", value); }
        int type() const { return ReadField<int>("type"); }
        void type(int value) const { WriteField<int>("type", value); }
        void* colour() const { return ReadField<void*>("colour"); }
        void colour(void* value) const { WriteField<void*>("colour", value); }
        float men() const { return ReadField<float>("men"); }
        void men(float value) const { WriteField<float>("men", value); }
        float menCap() const { return ReadField<float>("menCap"); }
        void menCap(float value) const { WriteField<float>("menCap", value); }
        float org01() const { return ReadField<float>("org01"); }
        void org01(float value) const { WriteField<float>("org01", value); }
        float atkPerMan() const { return ReadField<float>("atkPerMan"); }
        void atkPerMan(float value) const { WriteField<float>("atkPerMan", value); }
        float defPerMan() const { return ReadField<float>("defPerMan"); }
        void defPerMan(float value) const { WriteField<float>("defPerMan", value); }
        float incoming() const { return ReadField<float>("incoming"); }
        void incoming(float value) const { WriteField<float>("incoming", value); }
        float guns() const { return ReadField<float>("guns"); }
        void guns(float value) const { WriteField<float>("guns", value); }
        void* front() const { return ReadField<void*>("front"); }
        void front(void* value) const { WriteField<void*>("front", value); }
        float frontHalfWidth() const { return ReadField<float>("frontHalfWidth"); }
        void frontHalfWidth(float value) const { WriteField<float>("frontHalfWidth", value); }
        float contactSeconds() const { return ReadField<float>("contactSeconds"); }
        void contactSeconds(float value) const { WriteField<float>("contactSeconds", value); }
        bool controllable() const { return ReadField<bool>("controllable"); }
        void controllable(bool value) const { WriteField<bool>("controllable", value); }
        bool auto_() const { return ReadField<bool>("auto"); }
        void auto_(bool value) const { WriteField<bool>("auto", value); }
        bool pressing() const { return ReadField<bool>("pressing"); }
        void pressing(bool value) const { WriteField<bool>("pressing", value); }
        bool holding() const { return ReadField<bool>("holding"); }
        void holding(bool value) const { WriteField<bool>("holding", value); }
    };
}
