#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class ResearchSlots : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResearchSlots(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "ResearchSlots") {}
    public:
        void* Name(int slot) const { void* args[] = { &slot }; return CallStatic("Name", args, 1); }
        int Of(int c) const { void* args[] = { &c }; return CallStaticValue<int>("Of", args, 1); }
        int OfTech(int tech) const { void* args[] = { &tech }; return CallStaticValue<int>("OfTech", args, 1); }
        bool Auto_(int mask, int slot) const { void* args[] = { &mask, &slot }; return CallStaticValue<bool>("Auto", args, 2); }
        void* Techs(int slot) const { void* args[] = { &slot }; return CallStatic("Techs", args, 1); }
        void* NewIdle() const { return CallStatic("NewIdle", nullptr, 0); }
        int Count() const { return ReadStaticField<int>("Count"); }
        int Economy() const { return ReadStaticField<int>("Economy"); }
        int Society() const { return ReadStaticField<int>("Society"); }
        int Warfare() const { return ReadStaticField<int>("Warfare"); }
        int Naval() const { return ReadStaticField<int>("Naval"); }
        int AllBits() const { return ReadStaticField<int>("AllBits"); }
    };
}
