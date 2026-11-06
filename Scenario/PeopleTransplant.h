#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class PeopleTransplant : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleTransplant(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "PeopleTransplant") {}
    public:
        bool ReadHeader(const char* path, void* h) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0, &h }; return CallStaticValue<bool>("ReadHeader", args, 2); }
        void* OnSameMap(const char* mapHash, int width, int height) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(mapHash ? mapHash : "") : nullptr; void* args[] = { managed_0, &width, &height }; return CallStatic("OnSameMap", args, 3); }
        void* CopyInto(void* source, const char* stem) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(stem ? stem : "") : nullptr; void* args[] = { source, managed_1 }; return CallStatic("CopyInto", args, 2); }
        void Apply(void* source, void* target) const { void* args[] = { source, target }; CallStatic("Apply", args, 2); }
        void* stem() const { return ReadField<void*>("stem"); }
        void SetStem(void* value) const { WriteField<void*>("stem", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* mapHash() const { return ReadField<void*>("mapHash"); }
        void SetMapHash(void* value) const { WriteField<void*>("mapHash", value); }
        void* mapFile() const { return ReadField<void*>("mapFile"); }
        void SetMapFile(void* value) const { WriteField<void*>("mapFile", value); }
        int width() const { return ReadField<int>("width"); }
        void SetWidth(int value) const { WriteField<int>("width", value); }
        int height() const { return ReadField<int>("height"); }
        void SetHeight(int value) const { WriteField<int>("height", value); }
    };
}
