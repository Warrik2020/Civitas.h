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
        int Kind(void* d, void* enemy, int age, void* held, bool closing) const { void* args[] = { d, enemy, &age, held, &closing }; return CallStaticValue<int>("Kind", args, 5); }
        bool Closing(void* d, void* enemy) const { void* args[] = { d, enemy }; return CallStaticValue<bool>("Closing", args, 2); }
        void Extents(void* d, void* centre, void* fwd, void* sameSide, float& shift, float& halfWidth) const { void* args[] = { d, centre, fwd, sameSide, &shift, &halfWidth }; CallStatic("Extents", args, 6); }
    };
}
