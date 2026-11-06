#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Generation
{
    class BorderGenerator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderGenerator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Generation", "BorderGenerator") {}
    public:
        void* Generate(void* grid, void* existingCapitals, int minSeparation, void* s) const { void* __callArgs[] = { grid, existingCapitals, &minSeparation, s }; return CallStatic("Generate", __callArgs, 4); }
    };
}
