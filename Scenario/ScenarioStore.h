#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ScenarioStore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioStore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ScenarioStore") {}
    public:
        void ClearPending() const { CallStatic("ClearPending", nullptr, 0); }
        void ApplyWorldOf(void* dto) const { void* args[] = { dto }; CallStatic("ApplyWorldOf", args, 1); }
        float ScaleOf(void* dto) const { void* args[] = { dto }; return CallStaticValue<float>("ScaleOf", args, 1); }
        bool SourceSizeOf(void* dto, const char* loadedMapPath, int& width, int& height, const char*& mapPath) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(loadedMapPath ? loadedMapPath : "") : nullptr; void* args[] = { dto, managed_1, &width, &height, &mapPath }; return CallStaticValue<bool>("SourceSizeOf", args, 5); }
        void* DirectoryFor(int kind) const { void* args[] = { &kind }; return CallStatic("DirectoryFor", args, 1); }
        void* PathFor(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("PathFor", args, 1); }
        void* PathFor(const char* name, int kind) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, &kind }; return CallStatic("PathFor", args, 2); }
        void* Slug(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Slug", args, 1); }
        void* List() const { return CallStatic("List", nullptr, 0); }
        void* List(int kind) const { void* args[] = { &kind }; return CallStatic("List", args, 1); }
        bool Exists(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("Exists", args, 1); }
        bool Exists(const char* name, int kind) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, &kind }; return CallStaticValue<bool>("Exists", args, 2); }
        bool Write(void* scenario, const char*& error) const { void* args[] = { scenario, &error }; return CallStaticValue<bool>("Write", args, 2); }
        bool Write(void* scenario, int kind, const char*& error) const { void* args[] = { scenario, &kind, &error }; return CallStaticValue<bool>("Write", args, 3); }
        void* Read(const char* name, const char*& error) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, &error }; return CallStatic("Read", args, 2); }
        void* Read(const char* name, int kind, const char*& error) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, &kind, &error }; return CallStatic("Read", args, 3); }
        bool Delete_(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("Delete", args, 1); }
        bool Delete_(const char* name, int kind) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, &kind }; return CallStaticValue<bool>("Delete", args, 2); }
        bool MatchesWorld(void* dto, const char* mapHash, int width, int height, const char*& why) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(mapHash ? mapHash : "") : nullptr; void* args[] = { dto, managed_1, &width, &height, &why }; return CallStaticValue<bool>("MatchesWorld", args, 5); }
        bool AdoptMap(void* dto, const char* currentHash, int width, int height, const char*& why) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(currentHash ? currentHash : "") : nullptr; void* args[] = { dto, managed_1, &width, &height, &why }; return CallStaticValue<bool>("AdoptMap", args, 5); }
        bool CanOpen(void* dto, const char* mapHash, int width, int height, const char*& why) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(mapHash ? mapHash : "") : nullptr; void* args[] = { dto, managed_1, &width, &height, &why }; return CallStaticValue<bool>("CanOpen", args, 5); }
        void* Encode(void* values, int count) const { void* args[] = { values, &count }; return CallStatic("Encode", args, 2); }
        void* Encode(void* values, int count) const { void* args[] = { values, &count }; return CallStatic("Encode", args, 2); }
        bool Decode(void* runs, void* dst, int count) const { void* args[] = { runs, dst, &count }; return CallStaticValue<bool>("Decode", args, 3); }
        bool Decode(void* runs, void* dst, int count) const { void* args[] = { runs, dst, &count }; return CallStaticValue<bool>("Decode", args, 3); }
        void* PendingLoad() const { return ReadStaticField<void*>("PendingLoad"); }
        void SetPendingLoad(void* value) const { WriteStaticField<void*>("PendingLoad", value); }
        int PendingLoadKind() const { return ReadStaticField<int>("PendingLoadKind"); }
        void SetPendingLoadKind(int value) const { WriteStaticField<int>("PendingLoadKind", value); }
        int PendingRole() const { return ReadStaticField<int>("PendingRole"); }
        void SetPendingRole(int value) const { WriteStaticField<int>("PendingRole", value); }
        int PendingDifficultyLevel() const { return ReadStaticField<int>("PendingDifficultyLevel"); }
        void SetPendingDifficultyLevel(int value) const { WriteStaticField<int>("PendingDifficultyLevel", value); }
        int PendingAggression() const { return ReadStaticField<int>("PendingAggression"); }
        void SetPendingAggression(int value) const { WriteStaticField<int>("PendingAggression", value); }
    };
}
