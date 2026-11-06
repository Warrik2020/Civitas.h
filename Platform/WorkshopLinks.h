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
        uint64_t Get(const char* slug) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(slug ? slug : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<uint64_t>("Get", args, 1); }
        void Set(const char* slug, uint64_t fileId) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(slug ? slug : "") : nullptr; void* args[] = { managed_0, &fileId }; CallStatic("Set", args, 2); }
        void* slugs() const { return ReadField<void*>("slugs"); }
        void SetSlugs(void* value) const { WriteField<void*>("slugs", value); }
        void* ids() const { return ReadField<void*>("ids"); }
        void SetIds(void* value) const { WriteField<void*>("ids", value); }
    };
}
