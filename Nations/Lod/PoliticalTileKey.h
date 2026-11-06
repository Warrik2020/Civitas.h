#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class PoliticalTileKey : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PoliticalTileKey(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "PoliticalTileKey") {}
    public:
        bool Same(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("Same", args, 2); }
    };
}
