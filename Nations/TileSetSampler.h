#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TileSetSampler : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileSetSampler(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TileSetSampler") {}
    public:
        float Sample(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<float>("Sample", __callArgs, 2); }
        bool ChunkHasData(int cx, int cy) const { void* __callArgs[] = { &cx, &cy }; return CallValue<bool>("ChunkHasData", __callArgs, 2); }
        void* Page(int cx, int cy) const { void* __callArgs[] = { &cx, &cy }; return Call("Page", __callArgs, 2); }
        bool ChunkFull(int cx, int cy) const { void* __callArgs[] = { &cx, &cy }; return CallValue<bool>("ChunkFull", __callArgs, 2); }
    };
}
