#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class AiLodOverlay : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AiLodOverlay(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "AiLodOverlay") {}
    public:
        void Bind(void* grid, void* space, void* cfg) const { void* __callArgs[] = { grid, space, cfg }; Call("Bind", __callArgs, 3); }
    };
}
