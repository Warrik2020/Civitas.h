#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class PlayerMilitaryManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerMilitaryManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "PlayerMilitaryManager") {}
    public:
        int DismissOverdueLevies() const { return CallValue<int>("DismissOverdueLevies", nullptr, 0); }
        int RecruitSlotsAt(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<int>("RecruitSlotsAt", __callArgs, 1); }
        void GetRecruitStates(void* into) const { void* __callArgs[] = { into }; Call("GetRecruitStates", __callArgs, 1); }
        bool IsRecruitState(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<bool>("IsRecruitState", __callArgs, 1); }
        int StateAtTile(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallValue<int>("StateAtTile", __callArgs, 1); }
        int StateOfCity(int cityId) const { void* __callArgs[] = { &cityId }; return CallValue<int>("StateOfCity", __callArgs, 1); }
        void* FindCity(int cityId) const { void* __callArgs[] = { &cityId }; return Call("FindCity", __callArgs, 1); }
        void* SeatCityOf(int stateId) const { void* __callArgs[] = { &stateId }; return Call("SeatCityOf", __callArgs, 1); }
        void* StateName(int stateId) const { void* __callArgs[] = { &stateId }; return Call("StateName", __callArgs, 1); }
        int TypesQueuedAt(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<int>("TypesQueuedAt", __callArgs, 1); }
        bool CanQueueAt(int stateId, int type) const { void* __callArgs[] = { &stateId, &type }; return CallValue<bool>("CanQueueAt", __callArgs, 2); }
        bool RaisesType(int stateId, int type) const { void* __callArgs[] = { &stateId, &type }; return CallValue<bool>("RaisesType", __callArgs, 2); }
        int TrainingCountIn(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<int>("TrainingCountIn", __callArgs, 1); }
        float TrainingSpeedOf(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<float>("TrainingSpeedOf", __callArgs, 1); }
        float StateCostMulAt(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<float>("StateCostMulAt", __callArgs, 1); }
        float TrainingPowerOf(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<float>("TrainingPowerOf", __callArgs, 1); }
        float TrainingPowerAtCity(int cityId) const { void* __callArgs[] = { &cityId }; return CallValue<float>("TrainingPowerAtCity", __callArgs, 1); }
        bool Enqueue(int type, int count, int stateId) const { void* __callArgs[] = { &type, &count, &stateId }; return CallValue<bool>("Enqueue", __callArgs, 3); }
        bool EnqueueOverload18(int templateId, int count, int stateId) const { void* __callArgs[] = { &templateId, &count, &stateId }; return CallValue<bool>("Enqueue", __callArgs, 3); }
        float PendingHeads(int kind) const { void* __callArgs[] = { &kind }; return CallValue<float>("PendingHeads", __callArgs, 1); }
        void* TemplateOf(void* line, void* unit) const { void* __callArgs[] = { line, unit }; return Call("TemplateOf", __callArgs, 2); }
        void* LineTemplate(void* line) const { void* __callArgs[] = { line }; return Call("LineTemplate", __callArgs, 1); }
        void CancelEntry(void* entry) const { void* __callArgs[] = { entry }; Call("CancelEntry", __callArgs, 1); }
        void AdjustCount(void* entry, int delta) const { void* __callArgs[] = { entry, &delta }; Call("AdjustCount", __callArgs, 2); }
        bool RedirectEntry(void* entry, int stateId) const { void* __callArgs[] = { entry, &stateId }; return CallValue<bool>("RedirectEntry", __callArgs, 2); }
        int Draft(int type, int count, int stateId, void* lastFailure) const { void* __callArgs[] = { &type, &count, &stateId, &lastFailure }; return CallValue<int>("Draft", __callArgs, 4); }
        int DraftOverload26(int templateId, int count, int stateId, void* lastFailure) const { void* __callArgs[] = { &templateId, &count, &stateId, &lastFailure }; return CallValue<int>("Draft", __callArgs, 4); }
        void SetOverlaysVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetOverlaysVisible", __callArgs, 1); }
    };
}
