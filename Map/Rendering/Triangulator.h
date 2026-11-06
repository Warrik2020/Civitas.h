#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class Triangulator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Triangulator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "Triangulator") {}
    public:
        void Triangulate(void* outerIn, void* holesIn, void* vertices, void* triangles) const { void* args[] = { outerIn, holesIn, &vertices, &triangles }; CallStatic("Triangulate", args, 4); }
    };
}
