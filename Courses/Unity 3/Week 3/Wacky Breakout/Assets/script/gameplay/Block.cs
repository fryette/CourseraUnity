using Assets.script.Audio;
using Assets.script.Events;
using Assets.script.Events.Models;

namespace Assets.script.gameplay
{
	public class Block : IntEventInvoker
	{
		protected int Worth;
		protected AudioClipName AudioClipName;

		protected virtual void Start()
		{
			Events.Add(EventName.SCORE_CHANGED_EVENT, new ScoreChangedEvent());
			Events.Add(EventName.GAME_WIN, new GameWin());
			EventManager.AddInvoker(EventName.GAME_WIN, this);
			EventManager.AddInvoker(EventName.SCORE_CHANGED_EVENT, this);
		}

		protected virtual void OnCollisionEnter2D()
		{
			AudioManager.Play(AudioClipName);

			Events[EventName.SCORE_CHANGED_EVENT].Invoke(Worth);
			Destroy(gameObject);
			Events[EventName.GAME_WIN].Invoke(Worth);
		}

		protected void OnBecameInvisible()
		{
			EventManager.RemoveInvoker(EventName.SCORE_CHANGED_EVENT, this);
			EventManager.RemoveInvoker(EventName.GAME_WIN, this);
			Destroy(gameObject);
		}
	}
}
