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
        void ApplyWorldOf(void* dto) const { void* __callArgs[] = { dto }; CallStatic("ApplyWorldOf", __callArgs, 1); }
        float ScaleOf(void* dto) const { void* __callArgs[] = { dto }; return CallStaticValue<float>("ScaleOf", __callArgs, 1); }
        bool SourceSizeOf(void* dto, const char* loadedMapPath, int& width, int& height, const char*& mapPath) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(loadedMapPath ? loadedMapPath : "") : nullptr; void* __callArgs[] = { dto, managed_1, &width, &height, &mapPath }; return CallStaticValue<bool>("SourceSizeOf", __callArgs, 5); }
        void* DirectoryFor(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("DirectoryFor", __callArgs, 1); }
        void* PathFor(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("PathFor", __callArgs, 1); }
        void* PathFor(const char* name, int kind) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &kind }; return CallStatic("PathFor", __callArgs, 2); }
        void* Slug(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Slug", __callArgs, 1); }
        void* List() const { return CallStatic("List", nullptr, 0); }
        void* List(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("List", __callArgs, 1); }
        bool Exists(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("Exists", __callArgs, 1); }
        bool Exists(const char* name, int kind) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &kind }; return CallStaticValue<bool>("Exists", __callArgs, 2); }
        bool Write(void* scenario, const char*& error) const { void* __callArgs[] = { scenario, &error }; return CallStaticValue<bool>("Write", __callArgs, 2); }
        bool Write(void* scenario, int kind, const char*& error) const { void* __callArgs[] = { scenario, &kind, &error }; return CallStaticValue<bool>("Write", __callArgs, 3); }
        void* Read(const char* name, const char*& error) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &error }; return CallStatic("Read", __callArgs, 2); }
        void* Read(const char* name, int kind, const char*& error) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &kind, &error }; return CallStatic("Read", __callArgs, 3); }
        bool Delete_(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("Delete", __callArgs, 1); }
        bool Delete_(const char* name, int kind) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &kind }; return CallStaticValue<bool>("Delete", __callArgs, 2); }
        bool MatchesWorld(void* dto, const char* mapHash, int width, int height, const char*& why) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(mapHash ? mapHash : "") : nullptr; void* __callArgs[] = { dto, managed_1, &width, &height, &why }; return CallStaticValue<bool>("MatchesWorld", __callArgs, 5); }
        bool AdoptMap(void* dto, const char* currentHash, int width, int height, const char*& why) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(currentHash ? currentHash : "") : nullptr; void* __callArgs[] = { dto, managed_1, &width, &height, &why }; return CallStaticValue<bool>("AdoptMap", __callArgs, 5); }
        bool CanOpen(void* dto, const char* mapHash, int width, int height, const char*& why) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(mapHash ? mapHash : "") : nullptr; void* __callArgs[] = { dto, managed_1, &width, &height, &why }; return CallStaticValue<bool>("CanOpen", __callArgs, 5); }
        void* Encode(void* values, int count) const { void* __callArgs[] = { values, &count }; return CallStatic("Encode", __callArgs, 2); }
        void* EncodeOverload22(void* values, int count) const { void* __callArgs[] = { values, &count }; return CallStatic("Encode", __callArgs, 2); }
        bool Decode(void* runs, void* dst, int count) const { void* __callArgs[] = { runs, dst, &count }; return CallStaticValue<bool>("Decode", __callArgs, 3); }
        bool DecodeOverload24(void* runs, void* dst, int count) const { void* __callArgs[] = { runs, dst, &count }; return CallStaticValue<bool>("Decode", __callArgs, 3); }
        void* PendingLoad() const { return ReadStaticField<void*>("PendingLoad"); }
        void PendingLoad(void* value) const { WriteStaticField<void*>("PendingLoad", value); }
        int PendingLoadKind() const { return ReadStaticField<int>("PendingLoadKind"); }
        void PendingLoadKind(int value) const { WriteStaticField<int>("PendingLoadKind", value); }
        int PendingRole() const { return ReadStaticField<int>("PendingRole"); }
        void PendingRole(int value) const { WriteStaticField<int>("PendingRole", value); }
        int PendingDifficultyLevel() const { return ReadStaticField<int>("PendingDifficultyLevel"); }
        void PendingDifficultyLevel(int value) const { WriteStaticField<int>("PendingDifficultyLevel", value); }
        int PendingAggression() const { return ReadStaticField<int>("PendingAggression"); }
        void PendingAggression(int value) const { WriteStaticField<int>("PendingAggression", value); }
    };
}
