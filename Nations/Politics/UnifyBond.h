#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyBond : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyBond(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyBond") {}
    public:
        bool Has(int n) const { void* __callArgs[] = { &n }; return CallValue<bool>("Has", __callArgs, 1); }
        int Other(int n) const { void* __callArgs[] = { &n }; return CallValue<int>("Other", __callArgs, 1); }
        int a() const { return ReadField<int>("a"); }
        void a(int value) const { WriteField<int>("a", value); }
        int b() const { return ReadField<int>("b"); }
        void b(int value) const { WriteField<int>("b", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int sinceTick() const { return ReadField<int>("sinceTick"); }
        void sinceTick(int value) const { WriteField<int>("sinceTick", value); }
    };
}
