#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FrontPosture : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontPosture(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FrontPosture") {}
    public:
        int Kind(void* d, void* enemy, int age, void* held, bool closing) const { void* __callArgs[] = { d, enemy, &age, held, &closing }; return CallStaticValue<int>("Kind", __callArgs, 5); }
        bool Closing(void* d, void* enemy) const { void* __callArgs[] = { d, enemy }; return CallStaticValue<bool>("Closing", __callArgs, 2); }
        void Extents(void* d, void* centre, void* fwd, void* sameSide, float& shift, float& halfWidth) const { void* __callArgs[] = { d, centre, fwd, sameSide, &shift, &halfWidth }; CallStatic("Extents", __callArgs, 6); }
    };
}
