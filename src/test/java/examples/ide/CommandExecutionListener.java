package examples.ide;

import java.util.EventListener;

public interface CommandExecutionListener extends EventListener
  {
   public void commandExecutionEventOccurred(CommandExecutionEvent cee);
  }