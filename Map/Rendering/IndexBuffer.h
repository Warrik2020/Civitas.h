#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class IndexBuffer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IndexBuffer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "IndexBuffer") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void AppendOffset(void* src, int offset) const { void* args[] = { src, &offset }; Call("AppendOffset", args, 2); }
        void SetTriangles(void* mesh, bool calculateBounds) const { void* args[] = { mesh, &calculateBounds }; Call("SetTriangles", args, 2); }
    };
}
