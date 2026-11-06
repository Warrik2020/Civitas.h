#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class TileLodOverlay : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileLodOverlay(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "TileLodOverlay") {}
    public:
        void Bind(void* grid, void* space) const { void* args[] = { grid, space }; Call("Bind", args, 2); }
    };
}
