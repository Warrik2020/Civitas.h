#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TileGridBuilder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileGridBuilder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TileGridBuilder") {}
    public:
        void* Build(void* landGrid, int w, int h) const { void* args[] = { landGrid, &w, &h }; return CallStatic("Build", args, 3); }
        void Enqueue(int tile) const { void* args[] = { &tile }; Call("Enqueue", args, 1); }
        int Dequeue() const { return CallValue<int>("Dequeue", nullptr, 0); }
    };
}
