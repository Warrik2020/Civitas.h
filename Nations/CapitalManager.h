#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class CapitalManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CapitalManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "CapitalManager") {}
    public:
        int Validate(void* grid, void* cfg, int x, int y, void* existingCapitals) const { void* __callArgs[] = { grid, cfg, &x, &y, existingCapitals }; return CallStaticValue<int>("Validate", __callArgs, 5); }
        void* BuildParams(void* grid, void* cfg, int x, int y, int nationId, void* usedNames) const { void* __callArgs[] = { grid, cfg, &x, &y, &nationId, usedNames }; return CallStatic("BuildParams", __callArgs, 6); }
    };
}
