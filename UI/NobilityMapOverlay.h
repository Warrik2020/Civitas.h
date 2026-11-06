#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NobilityMapOverlay : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NobilityMapOverlay(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NobilityMapOverlay") {}
    public:
        void ShowBarony(int deed) const { void* args[] = { &deed }; CallStatic("ShowBarony", args, 1); }
    };
}
