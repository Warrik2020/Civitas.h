#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ScenarioThumbnail : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioThumbnail(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ScenarioThumbnail") {}
    public:
        void* Begin(const char* path, int maxW, int maxH, void* maps, bool snapshot = false) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0, &maxW, &maxH, maps, &snapshot }; return CallStatic("Begin", args, 5); }
        int OwnerAt(float tx, float ty) const { void* args[] = { &tx, &ty }; return CallValue<int>("OwnerAt", args, 2); }
        float LandAt(float tx, float ty, int ownerHere) const { void* args[] = { &tx, &ty, &ownerHere }; return CallValue<float>("LandAt", args, 3); }
        bool Colour(int nationId, void* colour) const { void* args[] = { &nationId, &colour }; return CallValue<bool>("Colour", args, 2); }
        int SnapshotWidth() const { return ReadStaticField<int>("SnapshotWidth"); }
        int SnapshotHeight() const { return ReadStaticField<int>("SnapshotHeight"); }
        int x0() const { return ReadField<int>("x0"); }
        int y0() const { return ReadField<int>("y0"); }
        int w() const { return ReadField<int>("w"); }
        int h() const { return ReadField<int>("h"); }
        void* owner() const { return ReadField<void*>("owner"); }
        void SetOwner(void* value) const { WriteField<void*>("owner", value); }
        void* land() const { return ReadField<void*>("land"); }
        void SetLand(void* value) const { WriteField<void*>("land", value); }
        void* cover() const { return ReadField<void*>("cover"); }
        void SetCover(void* value) const { WriteField<void*>("cover", value); }
        int w() const { return ReadField<int>("w"); }
        void SetW(int value) const { WriteField<int>("w", value); }
        int h() const { return ReadField<int>("h"); }
        void SetH(int value) const { WriteField<int>("h", value); }
        void* file() const { return ReadField<void*>("file"); }
        void SetFile(void* value) const { WriteField<void*>("file", value); }
        void* path() const { return ReadField<void*>("path"); }
        void SetPath(void* value) const { WriteField<void*>("path", value); }
        int w() const { return ReadField<int>("w"); }
        void SetW(int value) const { WriteField<int>("w", value); }
        int h() const { return ReadField<int>("h"); }
        void SetH(int value) const { WriteField<int>("h", value); }
        bool Ok() const { return ReadField<bool>("Ok"); }
        void SetOk(bool value) const { WriteField<bool>("Ok", value); }
        int gridWidth() const { return ReadField<int>("gridWidth"); }
        void SetGridWidth(int value) const { WriteField<int>("gridWidth", value); }
        int gridHeight() const { return ReadField<int>("gridHeight"); }
        void SetGridHeight(int value) const { WriteField<int>("gridHeight", value); }
        bool worldGenerated() const { return ReadField<bool>("worldGenerated"); }
        void SetWorldGenerated(bool value) const { WriteField<bool>("worldGenerated", value); }
        void* mapFile() const { return ReadField<void*>("mapFile"); }
        void SetMapFile(void* value) const { WriteField<void*>("mapFile", value); }
        void* world() const { return ReadField<void*>("world"); }
        void SetWorld(void* value) const { WriteField<void*>("world", value); }
        void* ownerRuns() const { return ReadField<void*>("ownerRuns"); }
        void SetOwnerRuns(void* value) const { WriteField<void*>("ownerRuns", value); }
    };
}
