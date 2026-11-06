#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class WorkshopLinks : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorkshopLinks(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "WorkshopLinks") {}
    public:
        uint64_t Get(const char* slug) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(slug ? slug : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<uint64_t>("Get", __callArgs, 1); }
        void Set(const char* slug, uint64_t fileId) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(slug ? slug : "") : nullptr; void* __callArgs[] = { managed_0, &fileId }; CallStatic("Set", __callArgs, 2); }
    };
}
