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
        void AppendOffset(void* src, int offset) const { void* __callArgs[] = { src, &offset }; Call("AppendOffset", __callArgs, 2); }
        void SetTriangles(void* mesh, bool calculateBounds) const { void* __callArgs[] = { mesh, &calculateBounds }; Call("SetTriangles", __callArgs, 2); }
    };
}
