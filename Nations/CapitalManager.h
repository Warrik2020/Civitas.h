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
        int Validate(void* grid, void* cfg, int x, int y, void* existingCapitals) const { void* args[] = { grid, cfg, &x, &y, existingCapitals }; return CallStaticValue<int>("Validate", args, 5); }
        void* BuildParams(void* grid, void* cfg, int x, int y, int nationId, void* usedNames) const { void* args[] = { grid, cfg, &x, &y, &nationId, usedNames }; return CallStatic("BuildParams", args, 6); }
    };
}
