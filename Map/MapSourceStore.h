#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapSourceStore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapSourceStore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapSourceStore") {}
    public:
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Set(const char* fullPath) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(fullPath ? fullPath : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("Set", __callArgs, 1); }
        void* Find(const char* hash, const char* preferredName, int width, int height) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(hash ? hash : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(preferredName ? preferredName : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, &width, &height }; return CallStatic("Find", __callArgs, 4); }
        void* PendingPath() const { return ReadStaticField<void*>("PendingPath"); }
        void PendingPath(void* value) const { WriteStaticField<void*>("PendingPath", value); }
        void* PendingName() const { return ReadStaticField<void*>("PendingName"); }
        void PendingName(void* value) const { WriteStaticField<void*>("PendingName", value); }
    };
}
