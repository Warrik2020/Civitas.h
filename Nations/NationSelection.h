#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationSelection : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationSelection(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationSelection") {}
    public:
        void Select(int nationId) const { void* args[] = { &nationId }; CallStatic("Select", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        int None() const { return ReadStaticField<int>("None"); }
    };
}
