#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class MapIconTexture : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapIconTexture(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "MapIconTexture") {}
    public:
        void* Get(const char* resourcePath, bool outline = true) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(resourcePath ? resourcePath : "") : nullptr; void* __callArgs[] = { managed_0, &outline }; return CallStatic("Get", __callArgs, 2); }
    };
}
