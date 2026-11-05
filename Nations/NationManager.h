#pragma once

#include <cstdint>
#include "../CivitasCore.h"
#include "../Unity.h"

namespace CivitasPoly::Nations
{
    // Non-owning wrapper around the game's CivitasPoly.Nations.NationManager.
    // Pass the managed object pointer returned by Unity/game object discovery.
    class NationManager : public UnityEngine::Component
    {
    public:
        explicit NationManager(void* managedObject = nullptr)
            : UnityEngine::Component(g_api, managedObject) {}

        NationManager(ModAPI* api, void* managedObject)
            : UnityEngine::Component(api, managedObject) {}

        static constexpr const char* RuntimeNamespace() { return "CivitasPoly.Nations"; }
        static constexpr const char* RuntimeClassName() { return "NationManager"; }

        void* Raw() const { return object_; }
        explicit operator bool() const { return object_ != nullptr; }

        void* Invoke(const char* methodName, void** args = nullptr, int count = 0) const
        {
            return CivitasPoly::Internal::Invoke("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, count);
        }

        void* InvokeStatic(const char* methodName, void** args = nullptr, int count = 0) const
        {
            return CivitasPoly::Internal::Invoke("CivitasPoly.Nations", "NationManager",
                methodName, nullptr, args, count);
        }

        float TicksPerSecondAt(int index) const { return CallValue<float>("TicksPerSecondAt", index); }
        float SecondsPerTickAt(int index) const { return CallValue<float>("SecondsPerTickAt", index); }
        float SecondsPerDayAt(int index) const { return CallValue<float>("SecondsPerDayAt", index); }
        void* SpeedLabelAt(int index) const { return CallValueObject("SpeedLabelAt", index); }
        void* PaceLabelAt(int index) const { return CallValueObject("PaceLabelAt", index); }

        int CurrentDayIndex() const { return Get<int>("get_CurrentDayIndex"); }
        float DayFraction() const { return Get<float>("get_DayFraction"); }
        int HourOfDay() const { return Get<int>("get_HourOfDay"); }
        void* CurrentClockLabel() const { return GetObject("get_CurrentClockLabel"); }
        float MeasuredSecondsPerTick() const { return Get<float>("get_MeasuredSecondsPerTick"); }
        bool BordersSettled() const { return Get<bool>("get_BordersSettled"); }
        double OwedSeconds() const { return Get<double>("get_OwedSeconds"); }
        bool IsReady() const { return Get<bool>("get_IsReady"); }
        bool Importing() const { return Get<bool>("get_Importing"); }
        bool TickInFlight() const { return Get<bool>("get_TickInFlight"); }

        void* SkipBlockReason() const { return GetObject("SkipBlockReason"); }
        void BeginSkip() const { Call("BeginSkip"); }
        void EndSkip(bool keepPaused) const { CallValueVoid("EndSkip", keepPaused); }
        bool PausedBeforeSkip() const { return Get<bool>("get_PausedBeforeSkip"); }
        bool BeginRegionImport(void* regions, const char* source) const
        {
            void* managedSource = g_api && g_api->NewString ? g_api->NewString(source ? source : "") : nullptr;
            void* args[] = { regions, managedSource };
            return Internal::InvokeValue<bool>("CivitasPoly.Nations", "NationManager",
                "BeginRegionImport", object_, args, 2);
        }

        void RefreshFillLook() const { Call("RefreshFillLook"); }
        void UseGameRules() const { Call("UseGameRules"); }
        void SetPaused(bool paused) const { CallValueVoid("SetPaused", paused); }
        bool IsPaused() const { return Get<bool>("get_IsPaused"); }
        bool PeaceTableOpen() const { return Get<bool>("get_PeaceTableOpen"); }
        bool ClockHeld() const { return Get<bool>("get_ClockHeld"); }
        bool ImportInProgress() const { return Get<bool>("get_ImportInProgress"); }

        int SpeedCount() const { return Get<int>("get_SpeedCount"); }
        int SpeedIndex() const { return Get<int>("get_SpeedIndex"); }
        float SpeedMultiplier() const { return Get<float>("get_SpeedMultiplier"); }
        float SecondsToNextTick() const { return Get<float>("get_SecondsToNextTick"); }
        void SetSpeedIndex(int index) const { CallValueVoid("SetSpeedIndex", index); }
        void StepSpeed(int delta) const { CallValueVoid("StepSpeed", delta); }
        int CurrentTick() const { return Get<int>("get_CurrentTick"); }
        int CurrentYear() const { return Get<int>("get_CurrentYear"); }
        void* CurrentDate() const { return GetObject("get_CurrentDate"); }
        void* CurrentDateLabel() const { return GetObject("get_CurrentDateLabel"); }
        void* CurrentYearLabel() const { return GetObject("get_CurrentYearLabel"); }
        int PlayerNationId() const { return Get<int>("get_PlayerNationId"); }
        void SetPlayerNation(int id) const { CallValueVoid("SetPlayerNation", id); }
        bool IsFrozen(int id) const { return CallValue<bool>("IsFrozen", id); }
        void Tick() const { Call("Tick"); }
        int FoundBreakawayNation(void* seedTiles, void* beforeFinish = nullptr, int capitalAt = -1) const
        {
            void* args[] = { seedTiles, beforeFinish, &capitalAt };
            return Internal::InvokeValue<int>("CivitasPoly.Nations", "NationManager",
                "FoundBreakawayNation", object_, args, 3);
        }

        int GetCapital(int id) const { return CallValue<int>("GetCapital", id); }
        int TileCount(int id) const { return CallValue<int>("TileCount", id); }
        int OwnerAt(int x, int y) const { return CallTwoArgs<int>("OwnerAt", x, y); }
        void ReserveIdsThrough(int id) const { CallValueVoid("ReserveIdsThrough", id); }
        void SetRealm(int nationId, int realmId) const { CallTwoValuesVoid("SetRealm", nationId, realmId); }
        int RealmOf(int nationId) const { return CallValue<int>("RealmOf", nationId); }
        bool SameRealm(int a, int b) const { return CallTwoArgs<bool>("SameRealm", a, b); }
        bool IsNameTaken(const char* name) const { return CallString<bool>("IsNameTaken", name); }
        bool RenameNation(int id, const char* name) const { return CallIntString<bool>("RenameNation", id, name); }
        bool ReleaseNameOf(int id) const { return CallValue<bool>("ReleaseNameOf", id); }
        bool IsRandomMapMode() const { return Get<bool>("get_RandomMapMode"); }
        bool IsPlayerPickMode() const { return Get<bool>("get_PlayerPickMode"); }
        void RequestPlayerPick() const { Call("RequestPlayerPick"); }
        void SkipPlayerPick() const { Call("SkipPlayerPick"); }

        void* GetNation(int id) const { return CallValueObject("GetNation", id); }
        void* GetAllCapitals() const { return GetObject("GetAllCapitals"); }
        void* GetLobes(int id) const { return CallValueObject("GetLobes", id); }
        int IdCapacity() const { return Get<int>("get_IdCapacity"); }
        int ClaimVirginTiles(int nationId, void* tiles) const { return CallIntObject<int>("ClaimVirginTiles", nationId, tiles); }
        int GodPaintTiles(int nationId, void* tiles) const { return CallIntObject<int>("GodPaintTiles", nationId, tiles); }
        int GodEraseTiles(int nationId, void* tiles) const { return CallIntObject<int>("GodEraseTiles", nationId, tiles); }
        void TileToXY(int index, int& x, int& y) const
        {
            void* args[] = { &index, &x, &y };
            Internal::Invoke("CivitasPoly.Nations", "NationManager", "TileToXY", object_, args, 3);
        }
        void PaintTile(int tileIndex, void* color32Value) const { CallIntObjectVoid("PaintTile", tileIndex, color32Value); }
        void PaintTileRaw(int tileIndex, void* color32Value) const { CallIntObjectVoid("PaintTileRaw", tileIndex, color32Value); }
        void MarkFillBlockAt(int x, int y) const { CallTwoValuesVoid("MarkFillBlockAt", x, y); }
        void CedeTileTo(void* winnerNation, int tileIndex) const
        {
            void* args[] = { winnerNation, &tileIndex };
            Internal::Invoke("CivitasPoly.Nations", "NationManager", "CedeTileTo", object_, args, 2);
        }
        void MarkCapitalMarkersDirty() const { Call("MarkCapitalMarkersDirty"); }

    private:
        template <typename T>
        T Get(const char* methodName) const
        {
            return Internal::InvokeValue<T>("CivitasPoly.Nations", "NationManager",
                methodName, object_, nullptr, 0);
        }

        void* GetObject(const char* methodName) const
        {
            return Internal::Invoke("CivitasPoly.Nations", "NationManager",
                methodName, object_, nullptr, 0);
        }

        void Call(const char* methodName) const
        {
            Internal::Invoke("CivitasPoly.Nations", "NationManager",
                methodName, object_, nullptr, 0);
        }

        template <typename Result, typename Argument>
        Result CallValue(const char* methodName, Argument value) const
        {
            void* args[] = { &value };
            return Internal::InvokeValue<Result>("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 1);
        }

        template <typename T>
        void CallValueVoid(const char* methodName, T value) const
        {
            void* args[] = { &value };
            Internal::Invoke("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 1);
        }

        template <typename Result, typename First, typename Second>
        Result CallTwoArgs(const char* methodName, First first, Second second) const
        {
            void* args[] = { &first, &second };
            return Internal::InvokeValue<Result>("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 2);
        }

        template <typename T>
        void CallTwoValuesVoid(const char* methodName, T first, T second) const
        {
            void* args[] = { &first, &second };
            Internal::Invoke("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 2);
        }

        void CallIntObjectVoid(const char* methodName, int first, void* second) const
        {
            void* args[] = { &first, second };
            Internal::Invoke("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 2);
        }

        void* CallValueObject(const char* methodName, int value) const
        {
            void* args[] = { &value };
            return Internal::Invoke("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 1);
        }

        template <typename T>
        T CallString(const char* methodName, const char* value) const
        {
            void* stringObject = g_api && g_api->NewString ? g_api->NewString(value ? value : "") : nullptr;
            void* args[] = { stringObject };
            return Internal::InvokeValue<T>("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 1);
        }

        template <typename T>
        T CallIntString(const char* methodName, int id, const char* value) const
        {
            void* stringObject = g_api && g_api->NewString ? g_api->NewString(value ? value : "") : nullptr;
            void* args[] = { &id, stringObject };
            return Internal::InvokeValue<T>("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 2);
        }

        template <typename T>
        T CallIntObject(const char* methodName, int id, void* value) const
        {
            void* args[] = { &id, value };
            return Internal::InvokeValue<T>("CivitasPoly.Nations", "NationManager",
                methodName, object_, args, 2);
        }

    };
}
